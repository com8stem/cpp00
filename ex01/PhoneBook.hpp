#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <limits>

class PhoneBook
{
private:
	Contact contacts_[8];
	int current_index_;
	int contact_count_;

	void ShowContact(int index) const;
	std::string FormatField(const std::string &field) const;

public:
	PhoneBook()
	{
		current_index_ = 0;
		contact_count_ = 0;
	}

	void AddContact();
	void SearchContacts() const;
};

#endif
