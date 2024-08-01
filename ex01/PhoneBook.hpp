#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook
{
	private:
		Contact contacts[8];
		int currentIndex;
		int contactCount;

		void displayContact(int index) const;
		std::string formatField(const std::string &field) const;

	public:
		PhoneBook();

		void addContact();
		void searchContacts() const;
};

#endif
