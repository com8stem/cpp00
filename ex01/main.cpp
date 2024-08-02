#include "PhoneBook.hpp"

int main(int argc, char **argv)
{
	PhoneBook phoneBook;
	std::string command;

	if (argc > 1)
	{
		std::cerr << "Usage: " << argv[0] << std::endl;
		return 1;
	}
	while (true)
	{
		std::cout << "Enter a command: ";
		if (!std::getline(std::cin, command))
		{
			std::cout << "\nEOF detected. Exiting the program." << std::endl;
			break;
		}

		if (command == "ADD")
		{
			phoneBook.AddContact();
		}
		else if (command == "SEARCH")
		{
			phoneBook.SearchContacts();
		}
		else if (command == "EXIT")
		{
			break;
		}
		else
		{
			std::cout << "Invalid command." << std::endl;
		}
	}
	return 0;
}
