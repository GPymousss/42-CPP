/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gletilly <gletilly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 21:35:07 by gletilly          #+#    #+#             */
/*   Updated: 2025/10/09 21:56:59 by gletilly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
	std::cout << "A zombie has been created!" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "A zombie has been destroyed!" << std::endl;
}

void Zombie::announce(void) {
	std::cout << name << ": Braiiiiiiinnnssss..." << std::endl;
}
