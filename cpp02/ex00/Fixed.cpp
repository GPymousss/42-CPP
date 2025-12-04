/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gletilly <gletilly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 06:53:18 by gletilly          #+#    #+#             */
/*   Updated: 2025/12/04 09:10:21 by gletilly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : rawBits(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& constructor)
{
	std::cout << "Copy constructor called\n";
	*this = constructor;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

Fixed&	Fixed::operator=(const Fixed& zizi)
{
	std::cout << "Copy assignment operator called\n";
	this->rawBits = zizi.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return this->rawBits;
}

void	Fixed::setRawBits(int const raw)
{
	this->rawBits = raw;
}
