/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gletilly <gletilly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 22:39:23 by gletilly          #+#    #+#             */
/*   Updated: 2025/10/09 22:39:46 by gletilly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon(void);

		const std::string&	getType(void) const;
		void				setType(std::string type);

	private:
		std::string	_type;
};

#endif
