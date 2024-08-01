#include "PhoneBook.hpp"

int main(int argc, char **argv)
{
	PhoneBook phoneBook;
	std::string command;
	(void)argv;

	if (argc != 1)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return 1;
	}
	std::cout << "Enter commands :";
	while (std::getline(std::cin, command))
	{
		if (command == "ADD")
		{
			phoneBook.addContact();
		}
		else if (command == "SEARCH")
		{
			phoneBook.searchContacts();
		}
		else if (command == "EXIT")
		{
			break;
		}
		else
		{
			std::cout << "Invalid command" << std::endl;
		}
		std::cout << "Enter commands :";
	}

	return 0;
}
