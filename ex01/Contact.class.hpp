/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 22:07:39 by merlich           #+#    #+#             */
/*   Updated: 2022/06/22 21:17:22 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>
#include <string.h>

class Contact{

	public:

		Contact(void);
		~Contact(void);

		std::string	getFirst_name(void) const;
		std::string	getLast_name(void) const;
		std::string	getNickname(void) const;
		std::string	getPhone_number(void) const;
		std::string	getDarkest_secret(void) const;
		void		setFirst_name(std::string first);
		void		setLast_name(std::string last);
		void		setNickname(std::string nick);
		void		setPhone_number(std::string phone);
		void		setDarkest_secret(std::string secret);

	private:

		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
};

#endif
