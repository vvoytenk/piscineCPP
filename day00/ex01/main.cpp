/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvoytenk <vvoytenk@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 17:32:24 by vvoytenk          #+#    #+#             */
/*   Updated: 2018/10/01 17:32:27 by vvoytenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"


static void	usage()
{
	std::cout << "___________THIS IS PHONEBOOK___________" << std::endl;
	std::cout << "AVAILABLE COMMANDS:\n\tADD;\n\tSEARCH;\n\tEXIT." << std::endl;
}

int		main()
{
	std::string command;
	Contact phonebook[MAX];
	int	num = 0;

	usage();
	std::cout << "Enter the command: ";
	while (1)
	{
		if (!getline(std::cin, command, '\n'))
		{
			std::cout << "\nGood bye!";
			std::exit(1);
		}
		if (command == "ADD")
		{
			if (num < MAX)
				phonebook[num++] = add();
			else
				std::cout << "SORRY! IT'S FULL!" << std::endl;
		}
		else if (command == "SEARCH")
		{
			if (num == 0)
				std::cout << "No contacts. Use ADD to create one." << std::endl;
			else
				search(num - 1, phonebook);
		}
		else if (command == "EXIT")
			break ;
	}
	return (0);
}
