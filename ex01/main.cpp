/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kishizu <kishizu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 18:29:15 by kishizu           #+#    #+#             */
/*   Updated: 2024/08/03 18:38:22 by kishizu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(int argc, char **argv)
{
	PhoneBook phone_book;
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
			return 1;
		}
		if (command == "ADD")
		{
			phone_book.AddContact();
		}
		else if (command == "SEARCH")
		{
			phone_book.SearchContacts();
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
