/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.1.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 22:08:05 by merlich           #+#    #+#             */
/*   Updated: 2022/06/23 19:04:18 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void){}

Contact::~Contact(void){}

std::string	Contact::getFirst_name(void) const{
	return this->_first_name;
}

std::string	Contact::getLast_name(void) const{
	return this->_last_name;
}

std::string	Contact::getNickname(void) const{
	return this->_nickname;
}

std::string	Contact::getPhone_number(void) const{
	return this->_phone_number;
}

std::string	Contact::getDarkest_secret(void) const{
	return this->_darkest_secret;
}
