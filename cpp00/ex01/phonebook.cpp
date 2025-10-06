/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gletilly <gletilly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 22:06:05 by gletilly          #+#    #+#             */
/*   Updated: 2025/10/04 22:22:20 by gletilly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_index = 0;
	this->_size = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::addContact(void)
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	darkestSecret;

	std::cout << "Enter first name: ";
	std::getline(std::cin, firstName);
	std::cout << "Enter last name: ";
	std::getline(std::cin, lastName);
	std::cout << "Enter nick name: ";
	std::getline(std::cin, nickName);
	std::cout << "Enter phone number: ";
	std::getline(std::cin, phoneNumber);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, darkestSecret);
	this->_contacts[this->_index].setContact(firstName, lastName, nickName, phoneNumber, darkestSecret);
	this->_index = (this->_index + 1) % 8;
	if (this->_size < 8)
		this->_size++;
	std::cout << "Contact added successfully!" << std::endl;
}

void	PhoneBook::searchContact(void)
{
	int	index;

	if (this->_size == 0)
	{
		std::cout << "No contacts available." << std::endl;
		return ;
	}
	std::cout << "Index | First Name | Last Name  | Nick Name " << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	for (int i = 0; i < this->_size; i++)
	{
		std::cout << "  " << i + 1 << "  | ";
		std::string firstName = this->_contacts[i].getFirstName();
		if (firstName.length() > 10)
			firstName = firstName.substr(0, 9) + ".";
		std::cout << std::setw(10) << firstName << " | ";
		std::string lastName = this->_contacts[i].getLastName();
		if (lastName.length() > 10)
			lastName = lastName.substr(0, 9) + ".";
		std::cout << std::setw(10) << lastName << " | ";
		std::string nickName = this->_contacts[i].getNickName();
		if (nickName.length() > 10)
			nickName = nickName.substr(0, 9) + ".";
		std::cout << std::setw(10) << nickName << std::endl;
	}
	std::cout << "Enter the index of the contact to view details: ";
	std::cin >> index;
	if (std::cin.fail() || index < 1 || index > this->_size)
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid index." << std::endl;
		return ;
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	this->_contacts[index - 1].getContact();
}