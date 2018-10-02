/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvoytenk <vvoytenk@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 17:31:54 by vvoytenk          #+#    #+#             */
/*   Updated: 2018/10/01 17:31:55 by vvoytenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>
#include <cstring>

#define	MAX 8

class Contact
{

public:
	Contact(void);
	~Contact(void);

	std::string	get_first_name(void);
	std::string get_last_name(void);
	std::string	get_nickname(void);
	std::string	get_login(void);
	std::string	get_postal_adress(void);
	std::string	get_email_adress(void);
	std::string	get_birthday_date(void);
	std::string	get_phone_number(void);
	std::string	get_favourite_meal(void);
	std::string	get_underwear_color(void);
	std::string	get_darkest_secret(void);
	void		set_first_name(std::string);
	void		set_last_name(std::string);
	void		set_nickname(std::string);
	void		set_login(std::string);
	void		set_postal_adress(std::string);
	void		set_email_adress(std::string);
	void		set_birthday_date(std::string);
	void		set_phone_number(std::string);
	void		set_favourite_meal(std::string);
	void		set_underwear_color(std::string);
	void		set_darkest_secret(std::string);

private:

	std::string	_first_name;
	std::string _last_name;
	std::string	_nickname;
	std::string	_login;
	std::string	_postal_adress;
	std::string	_email_adress;
	std::string	_birthday_date;
	std::string	_phone_number;
	std::string	_favourite_meal;
	std::string	_underwear_color;
	std::string	_darkest_secret;
};

void		search(int num, Contact all[]);
void		show(int num, Contact all[], int flag);
std::string	cut(std::string name);
Contact		add(void);


#endif
