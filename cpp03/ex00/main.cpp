/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gletilly <gletilly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 16:10:17 by gletilly          #+#    #+#             */
/*   Updated: 2025/12/08 18:00:28 by gletilly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	std::cout << "=== Test 1: Basic combat ===" << std::endl;
	ClapTrap momo("Momo");
	ClapTrap olivier("Olivier");

	momo.attack("Olivier");
	olivier.takeDamage(0);
	olivier.beRepaired(5);

	std::cout << "\n=== Test 2: Energy depletion ===" << std::endl;
	ClapTrap energyTest("EnergyBoi");
	for (int i = 0; i < 12; i++)
		energyTest.attack("Target");

	std::cout << "\n=== Test 3: Death ===" << std::endl;
	ClapTrap zombie("Zombie");
	zombie.takeDamage(10);
	zombie.attack("Ghost");
	zombie.beRepaired(5);

	std::cout << "\n=== Test 4: Copy constructor ===" << std::endl;
	ClapTrap original("Original");
	ClapTrap copy(original);

	std::cout << "\n=== Destruction ===" << std::endl;
	return 0;
}
