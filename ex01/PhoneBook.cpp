#include "PhoneBook.hpp"

void PhoneBook::AddContact()
{
	Contact new_contact;
	std::string input;

	std::cout << "Enter first name: ";
	if (!std::getline(std::cin, input) || input.empty())
	{
		std::cerr << "\nInput interrupted. Cancelling contact addition." << std::endl;
		return;
	}
	new_contact.set_first_name(input);

	std::cout << "Enter last name: ";
	if (!std::getline(std::cin, input) || input.empty())
	{
		std::cerr << "\nInput interrupted. Cancelling contact addition." << std::endl;
		return;
	}
	new_contact.set_last_name(input);

	std::cout << "Enter nickname: ";
	if (!std::getline(std::cin, input) || input.empty())
	{
		std::cerr << "\nInput interrupted. Cancelling contact addition." << std::endl;
		return;
	}
	new_contact.set_nickname(input);

	std::cout << "Enter phone number: ";
	if (!std::getline(std::cin, input) || input.empty())
	{
		std::cerr << "\nInput interrupted. Cancelling contact addition." << std::endl;
		return;
	}
	new_contact.set_phone_number(input);

	std::cout << "Enter darkest secret: ";
	if (!std::getline(std::cin, input) || input.empty())
	{
		std::cerr << "\nInput interrupted. Cancelling contact addition." << std::endl;
		return;
	}
	new_contact.set_darkest_secret(input);

	if (contact_count_ < 8)
	{
		contact_count_++;
	}
	contacts_[current_index_] = new_contact;
	current_index_ = (current_index_ + 1) % 8;
}

std::string PhoneBook::FormatField(const std::string &field) const
{
	if (field.length() > 10)
	{
		return field.substr(0, 9) + ".";
	}
	return field;
}

void PhoneBook::SearchContacts() const
{
	if (contact_count_ == 0)
	{
		std::cout << "The phonebook is empty." << std::endl;
		return;
	}

	std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 0; i < contact_count_; i++)
	{
		std::cout << "|" << std::setw(10) << i + 1
					<< "|" << std::setw(10) << FormatField(contacts_[i].get_first_name())
				  	<< "|" << std::setw(10) << FormatField(contacts_[i].get_last_name())
					<< "|" << std::setw(10) << FormatField(contacts_[i].get_nickname()) << "|\n";
	}

	int index;
	std::cout << "Enter the index of the contact to display: ";
	if (!(std::cin >> index))
	{
		std::cerr << "\nInput interrupted." << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return;
	}
	std::cin.ignore();
	if (index < 1 || index > contact_count_)
	{
		std::cout << "Invalid index." << std::endl;
	}
	else
	{
		ShowContact(index - 1);
	}
}

void PhoneBook::ShowContact(int index) const
{
	std::cout << "First name: " << contacts_[index].get_first_name() << std::endl;
	std::cout << "Last name: " << contacts_[index].get_last_name() << std::endl;
	std::cout << "Nickname: " << contacts_[index].get_nickname() << std::endl;
	std::cout << "Phone number: " << contacts_[index].get_phone_number() << std::endl;
	std::cout << "Darkest secret: " << contacts_[index].get_darkest_secret() << std::endl;
}
