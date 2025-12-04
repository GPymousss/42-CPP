/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gletilly <gletilly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 10:16:45 by gletilly          #+#    #+#             */
/*   Updated: 2025/12/04 10:45:07 by gletilly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					_value;
    	static const int	_fractionalBits = 8;

	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();

		int getRawBits(void) const;
		void setRawBits(int const value);

		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif