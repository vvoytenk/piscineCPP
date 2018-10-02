/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvoytenk <vvoytenk@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 17:31:45 by vvoytenk          #+#    #+#             */
/*   Updated: 2018/10/01 17:31:46 by vvoytenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void){ return ; }
Contact::~Contact(void){ return ; }

std::string	Contact::get_first_name(void)
{
	return (this->_first_name);
}

std::string	Contact::get_last_name(void)
{
	return (this->_last_name);
}

std::string	Contact::get_nickname(void)
{
	return (this->_nickname);
}

std::string	Contact::get_login(void)
{
	return (this->_login);
}

std::string	Contact::get_postal_adress(void)
{
	return (this->_postal_adress);
}

std::string	Contact::get_email_adress(void)
{
	return (this->_email_adress);
}

std::string	Contact::get_phone_number(void)
{
	return (this->_phone_number);
}

std::string	Contact::get_birthday_date(void)
{
	return (this->_birthday_date);
}

std::string	Contact::get_favourite_meal(void)
{
	return (this->_favourite_meal);
}

std::string	Contact::get_underwear_color(void)
{
	return (this->_underwear_color);
}

std::string	Contact::get_darkest_secret(void)
{
	return (this->_darkest_secret);
}

void	Contact::set_first_name(std::string data)
{
	this->_first_name = data;
	return ;
}

void	Contact::set_last_name(std::string data)
{
	this->_last_name = data;
	return ;
}

void	Contact::set_nickname(std::string data)
{
	this->_nickname = data;
	return ;
}

void	Contact::set_login(std::string data)
{
	this->_login = data;
	return ;
}

void	Contact::set_postal_adress(std::string data)
{
	this->_postal_adress = data;
	return ;
}

void	Contact::set_email_adress(std::string data)
{
	this->_email_adress = data;
	return ;
}

void	Contact::set_phone_number(std::string data)
{
	this->_phone_number = data;
	return ;
}

void	Contact::set_birthday_date(std::string data)
{
	this->_birthday_date = data;
	return ;
}

void	Contact::set_favourite_meal(std::string data)
{
	this->_favourite_meal = data;
	return ;
}

void	Contact::set_underwear_color(std::string data)
{
	this->_underwear_color = data;
	return ;
}

void	Contact::set_darkest_secret(std::string data)
{
	this->_darkest_secret = data;
	return ;
}
