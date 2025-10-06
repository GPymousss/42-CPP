/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gletilly <gletilly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 21:55:23 by gletilly          #+#    #+#             */
/*   Updated: 2025/10/06 09:06:54 by gletilly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <limits>

class Contact
{
	public:
		Contact(void);
		~Contact(void);
		void	setContact(
			std::string firstName,
			std::string lastName,
			std::string nickName,
			std::string phoneNumber,
			std::string darkestSecret
		);
		void	getContact(void) const;
		std::string	getFirstName(void) const { return this->_firstName; };
		std::string	getLastName(void) const { return this->_lastName; };
		std::string	getNickName(void) const { return this->_nickName; };
		std::string	getPhoneNumber(void) const { return this->_phoneNumber; };
		std::string	getDarkestSecret(void) const { return this->_darkestSecret; };
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
};

#endif