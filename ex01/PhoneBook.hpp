/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kishizu <kishizu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 18:29:21 by kishizu           #+#    #+#             */
/*   Updated: 2024/08/03 18:29:21 by kishizu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>
#include <iostream>
#include <string>
#include <cstdlib>

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
