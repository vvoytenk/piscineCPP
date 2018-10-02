/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvoytenk <vvoytenk@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 17:32:39 by vvoytenk          #+#    #+#             */
/*   Updated: 2018/10/01 17:32:40 by vvoytenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvoytenk <vvoytenk@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 16:35:07 by vvoytenk          #+#    #+#             */
/*   Updated: 2018/09/23 16:35:08 by vvoytenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact	add(void)
{
	Contact tmp;
	std::string	str;

	std::cout << "ENTER DATA:\nFirst name: ";
	std::cin >> str;
	tmp.set_first_name(str);
	std::cout << "Last name: ";
	std::cin >> str;
	tmp.set_last_name(str);
	std::cout << "Nickname: ";
	std::cin >> str;
	tmp.set_nickname(str);
	std::cout << "Login: ";
	std::cin >> str;
	tmp.set_login(str);
	std::cout << "Postal adress: ";
	std::cin >> str;
	tmp.set_postal_adress(str);
	std::cout << "Email adress: ";
	std::cin >> str;
	tmp.set_email_adress(str);
	std::cout << "Phone number: ";
	std::cin >> str;
	tmp.set_phone_number(str);
	std::cout << "Birthday date: ";
	std::cin >> str;
	tmp.set_birthday_date(str);
	std::cout << "Favourite meal: ";
	std::cin >> str;
	tmp.set_favourite_meal(str);
	std::cout << "Underwear color: ";
	std::cin >> str;
	tmp.set_underwear_color(str);
	std::cout << "Darkest secret: ";
	std::cin >> str;
	tmp.set_darkest_secret(str);
	std::cout << "Contact add succesful!" << std::endl;
	return (tmp);
}

std::string	cut(std::string name)
{
	int	i = name.length();

	if (i > 10)
	{
		name.erase(9);
		name.append(".");
	}
	else
	{
		while (i++ < 10)
			name.append(" ");
	}
	return (name);
}

void	show(int num, Contact all[], int flag)
{
	int	i = -1;
	std::string fname;
	std::string	lname;
	std::string	nname;

	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|Index     |First name|Last  name| Nickname |" << std::endl;
	if (flag == 1)
	{
		while (++i <= num)
		{
		 	fname = cut(all[i].get_first_name());
		 	lname = cut(all[i].get_last_name());
		 	nname = cut(all[i].get_nickname());
		 	std::cout << "|" << i << "         "<< "|" << fname << "|" << lname
		 	<< "|"  << nname << "|" << std::endl;
		}
	}
	else if (flag == 0)
	{
		fname = cut(all[num].get_first_name());
		lname = cut(all[num].get_last_name());
		nname = cut(all[num].get_nickname());
		std::cout << "|" << num << "         "<< "|" << fname << "|" << lname
		<< "|"  << nname << "|" << std::endl;

	}
	std::cout << "|-------------------------------------------|" << std::endl;
}


void	search(int num, Contact all[])
{
	std::string tmp;
	int			id;

	show(num, all, 1);
	std::cout << "Enter index of contact:";
	std::cin >> tmp;
	if (tmp[0] >= 48 && tmp[0] <= 57)
	{
		id = atoi(tmp.c_str());
		if (id >= 0 && id <= num)
			show(id, all, 0);
		else
			std::cout << "Contact is empty." << std::endl;
	}
	else
		std::cout << "Uncorrect index." << std::endl;
}
