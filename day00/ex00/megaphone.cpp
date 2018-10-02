/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvoytenk <vvoytenk@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 10:56:09 by vvoytenk          #+#    #+#             */
/*   Updated: 2018/10/01 10:56:11 by vvoytenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int argc, char **argv)
{
	int	i;
	int	k = 0;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEAREABLE FEEDBACK NOISE *";
	while (++k < argc)
	{
		i = -1;
		while (argv[k][++i] != '\0')
		{
			if (argv[k][i] >= 97 && argv[k][i] <= 122)
				argv[k][i] -= 32;
			std::cout << argv[k][i];
		}
	}
	std::cout << "\n";
	return (0);
}
