/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gletilly <gletilly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 10:21:34 by gletilly          #+#    #+#             */
/*   Updated: 2025/12/04 10:50:51 by gletilly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int value) : _value(value << _fractionalBits)
{
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float value) : _value(roundf(value*(1<<_fractionalBits)))
{
	std::cout << "Float constructor called\n";
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called\n";
	*this = other;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

Fixed&	Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called\n";
	this->_value = other.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const
{
	return this->_value;
}

void	Fixed::setRawBits(int const value)
{
	this->_value = value;
}

float	Fixed::toFloat(void) const
{
	return (float)this->_value / (1 << this->_fractionalBits);
}

int	Fixed::toInt(void) const
{
	return this->_value >> this->_fractionalBits;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}
