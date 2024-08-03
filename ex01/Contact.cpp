/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kishizu <kishizu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 18:29:03 by kishizu           #+#    #+#             */
/*   Updated: 2024/08/03 19:02:34 by kishizu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::set_first_name(const std::string first_name)
{
	this->first_name_ = first_name;
}

void Contact::set_last_name(const std::string last_name)
{
	this->last_name_ = last_name;
}

void Contact::set_nickname(const std::string nickname)
{
	this->nickname_ = nickname;
}

void Contact::set_phone_number(const std::string phone_number)
{
	this->phone_number_ = phone_number;
}

void Contact::set_darkest_secret(const std::string darkest_secret)
{
	this->darkest_secret_ = darkest_secret;
}

std::string Contact::get_first_name() const
{
	return first_name_;
}

std::string Contact::get_last_name() const
{
	return last_name_;
}

std::string Contact::get_nickname() const
{
	return nickname_;
}

std::string Contact::get_phone_number() const
{
	return phone_number_;
}

std::string Contact::get_darkest_secret() const
{
	return darkest_secret_;
}
