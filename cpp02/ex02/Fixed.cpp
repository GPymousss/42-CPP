/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gletilly <gletilly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 11:23:15 by gletilly          #+#    #+#             */
/*   Updated: 2025/12/04 11:25:48 by gletilly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0) {}

Fixed::Fixed(const int value) : _value(value << _fractionalBits) {}

Fixed::Fixed(const float value) : _value(roundf(value*(1<<_fractionalBits))) {}

Fixed::Fixed(const Fixed& other)
{
	*this = other;
}

Fixed::~Fixed(void) {}

Fixed&	Fixed::operator=(const Fixed& other)
{
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

bool	Fixed::operator>(const Fixed& other) const
{
	return this->_value > other._value;
}

bool	Fixed::operator<(const Fixed& other) const
{
	return this->_value < other._value;
}

bool	Fixed::operator>=(const Fixed& other) const
{
	return this->_value >= other._value;
}

bool	Fixed::operator<=(const Fixed& other) const
{
	return this->_value <= other._value;
}

bool	Fixed::operator==(const Fixed& other) const
{
	return this->_value == other._value;
}

bool	Fixed::operator!=(const Fixed& other) const
{
	return this->_value != other._value;
}

Fixed	Fixed::operator+(const Fixed& other) const
{
	Fixed result;
	result.setRawBits(this->_value + other._value);
	return result;
}

Fixed	Fixed::operator-(const Fixed& other) const
{
	Fixed result;
	result.setRawBits(this->_value - other._value);
	return result;
}

Fixed	Fixed::operator*(const Fixed& other) const
{
	Fixed result;
	long temp = (long)this->_value * (long)other._value;
	result.setRawBits(temp >> this->_fractionalBits);
	return result;
}

Fixed	Fixed::operator/(const Fixed& other) const
{
	Fixed result;
	long temp = ((long)this->_value << this->_fractionalBits) / other._value;
	result.setRawBits(temp);
	return result;
}

Fixed&	Fixed::operator++(void)
{
	this->_value++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed temp(*this);
	this->_value++;
	return temp;
}

Fixed&	Fixed::operator--(void)
{
	this->_value--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed temp(*this);
	this->_value--;
	return temp;
}

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	return (a < b) ? a : b;
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	return (a < b) ? a : b;
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	return (a > b) ? a : b;
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	return (a > b) ? a : b;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}
