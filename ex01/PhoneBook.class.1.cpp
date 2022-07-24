/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.1.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 22:08:20 by merlich           #+#    #+#             */
/*   Updated: 2022/06/23 19:02:53 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void){}

PhoneBook::~PhoneBook(void){}

void	PhoneBook::_setFirst_name(void){

	std::string	tmp;

	std::cout << "Enter first name: ";
	std::cin >> tmp;
	this->_contact[PhoneBook::_count].setFirst_name(tmp);
}

void	PhoneBook::_setLast_name(void){

	std::string	tmp;

	std::cout << "Enter last name: ";
	std::cin >> tmp;
	this->_contact[PhoneBook::_count].setLast_name(tmp);
}

void	PhoneBook::_setNickname(void){

	std::string	tmp;

	std::cout << "Enter nickname: ";
	std::cin >> tmp;
	this->_contact[PhoneBook::_count].setNickname(tmp);
}

void	PhoneBook::_setPhone_number(void){

	std::string	tmp;

	std::cout << "Enter phone number: ";
	std::cin >> tmp;
	this->_contact[PhoneBook::_count].setPhone_number(tmp);
}

void	PhoneBook::_setDarkest_secret(void){

	std::string	tmp;

	std::cout << "Enter the darkest secret: ";
	std::cin >> tmp;
	this->_contact[PhoneBook::_count].setDarkest_secret(tmp);
}

int	PhoneBook::_count = 0;
