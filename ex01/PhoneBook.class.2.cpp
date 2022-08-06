/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.2.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 22:08:20 by merlich           #+#    #+#             */
/*   Updated: 2022/06/23 19:03:23 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "PhoneBook.class.hpp"

void	PhoneBook::add(void){
	
	this->_setFirst_name();
	this->_setLast_name();
	this->_setNickname();
	this->_setPhone_number();
	this->_setDarkest_secret();	
	PhoneBook::_count += 1;
	if (PhoneBook::_count == 8)
		PhoneBook::_count = 0;
}

void	PhoneBook::_display_string(std::string str) const{

	size_t	j;
	size_t	len;

	j = 0;
	len = str.length();
	if (len < 11){
		std::cout << std::setw(10);
		std::cout << str;
	}
	else{
		while (j < 9)
			std::cout << str[j++];
		std::cout << ".";
	}
	std::cout << "|";
}

void	PhoneBook::_display_all_contacts(void) const{

	int	i = 0;

	std::cout << std::endl;
	_display_string("index");
	_display_string("first_name");
	_display_string("last_name");
	_display_string("nickname");
	std::cout << std::endl;
	while (i < 8){
		std::cout << std::setw(10);
		std::cout << i << "|";

		this->_display_string(this->_contact[i].getFirst_name());
		this->_display_string(this->_contact[i].getLast_name());
		this->_display_string(this->_contact[i].getNickname());
		
		std::cout << std::endl;
		i++;
	}
}

int		PhoneBook::_get_index(void){
	
	int	num = -1;

	std::cout << std::endl;
	while (num < 0 || num > 7){
		std::cout << "Choose contact by number (0 - 7): ";
		std::cin >> num;
		if ( ( num  < 48 ) || ( num > 55 ))
			continue ;
	}
	std::cout << std::endl;
	return	num;
}

void	PhoneBook::_display_full_info(int index) const{
	
	std::cout << "First name: ";
	std::cout << this->_contact[index].getFirst_name() << std::endl;
	std::cout << "Last name: ";
	std::cout << this->_contact[index].getLast_name() << std::endl;
	std::cout << "Nickname: ";
	std::cout << this->_contact[index].getNickname() << std::endl;
	std::cout << "Phone number: ";
	std::cout << this->_contact[index].getPhone_number() << std::endl;
	std::cout << "The darkest secret: ";
	std::cout << this->_contact[index].getDarkest_secret() << std::endl;
	std::cout << std::endl;
}

void	PhoneBook::search(void){
	
	int	ind = 0;

	this->_display_all_contacts();
	ind = this->_get_index();
	this->_display_full_info(ind);
}
