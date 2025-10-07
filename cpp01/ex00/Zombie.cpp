/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gletilly <gletilly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 08:46:22 by gletilly          #+#    #+#             */
/*   Updated: 2025/10/07 08:47:44 by gletilly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {}

Zombie::~Zombie(void) {
	std::cout << this->_name << " is destroyed" << std::endl;
}

void	Zombie::announce(void) const {
	std::cout << this->_name << ": Braiiiiiiinnnssss..." << std::endl;
}
