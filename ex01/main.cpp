/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 22:08:44 by merlich           #+#    #+#             */
/*   Updated: 2022/06/22 21:51:42 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

int	main(void)
{
	std::string		input;
	PhoneBook		phonebook;

	while (1)
	{
		std::cout << "Enter your command (ADD, SEARCH or EXIT):" << std::endl;
		std::cin >> input;
		if (input == "ADD")
			phonebook.add();
		else if (input == "SEARCH")
			phonebook.search();
		else if (input == "EXIT")
			std::exit(0);
	}
	return 0;
}
