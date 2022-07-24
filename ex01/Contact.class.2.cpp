/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.2.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 22:08:05 by merlich           #+#    #+#             */
/*   Updated: 2022/06/23 19:04:26 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

void	Contact::setFirst_name(std::string first){
	this->_first_name = first;
}

void	Contact::setLast_name(std::string last){
	this->_last_name = last;
}

void	Contact::setNickname(std::string nick){
	this->_nickname = nick;
}

void	Contact::setPhone_number(std::string phone){
	this->_phone_number = phone;
}

void	Contact::setDarkest_secret(std::string secret){
	this->_darkest_secret = secret;	
}
