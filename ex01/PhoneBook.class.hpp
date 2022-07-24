/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 22:07:42 by merlich           #+#    #+#             */
/*   Updated: 2022/06/23 18:56:41 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include <iostream>
#include <string.h>
#include "Contact.class.hpp"

class PhoneBook{

	public:

		PhoneBook(void);
		~PhoneBook(void);
		void		add(void);
		void		search(void);
		static int	getCount(void);

	private:

		static int	_count;
		Contact		_contact[8];

		void		_setFirst_name(void);
		void		_setLast_name(void);
		void		_setNickname(void);
		void		_setPhone_number(void);
		void		_setDarkest_secret(void);

		void		_display_string(std::string str) const;
		void		_display_all_contacts(void) const;
		int			_get_index(void);
		void		_display_full_info(int index) const;
};

#endif
