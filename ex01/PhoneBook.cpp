#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : currentIndex(0), contactCount(0) {}

void PhoneBook::addContact()
{
	Contact newContact;

	std::string input;
	std::cout << "Enter first name: ";
	std::getline(std::cin, input);
	newContact.setFirstName(input);

	std::cout << "Enter last name: ";
	std::getline(std::cin, input);
	newContact.setLastName(input);

	std::cout << "Enter nickname: ";
	std::getline(std::cin, input);
	newContact.setNickname(input);

	std::cout << "Enter phone number: ";
	std::getline(std::cin, input);
	newContact.setPhoneNumber(input);

	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, input);
	newContact.setDarkestSecret(input);

	if (contactCount < 8)
	{
		contactCount++;
	}
	contacts[currentIndex] = newContact;
	currentIndex = (currentIndex + 1) % 8;
}

std::string PhoneBook::formatField(const std::string &field) const
{
	if (field.length() > 10)
	{
		return field.substr(0, 9) + ".";
	}
	return field;
}

void PhoneBook::searchContacts() const
{
	int index;

	if (contactCount == 0)
	{
		std::cout << "Phonebook is empty\n";
		return;
	}

	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "---------------------------------------------\n" << std::endl;
	for (int i = 0; i < contactCount; i++)
	{
		std::cout << "|" << std::setw(10) << i + 1
				  << "|" << std::setw(10) << formatField(contacts[i].getFirstName())
				  << "|" << std::setw(10) << formatField(contacts[i].getLastName())
				  << "|" << std::setw(10) << formatField(contacts[i].getNickname())
				  << "|\n";
	}
	
	std::cout << "Enter index: ";
	std::cin >> index;
	std::cin.ignore();

	if (index < 1 || index > contactCount)
	{
		std::cout << "Invalid index" << std::endl;
	}
	else
	{
		displayContact(index - 1);
	}
}

void PhoneBook::displayContact(int index) const
{
	std::cout << "First name: " << contacts[index].getFirstName() << std::endl;
	std::cout << "Last name: " << contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
	std::cout << "Phone number: " << contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << contacts[index].getDarkestSecret() << std::endl;
}
