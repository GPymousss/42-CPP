/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gletilly <gletilly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 17:43:07 by gletilly          #+#    #+#             */
/*   Updated: 2025/12/09 17:53:02 by gletilly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	std::cout << "╔════════════════════════════════════════╗" << std::endl;
	std::cout << "║  Test 1: Construction de FragTrap     ║" << std::endl;
	std::cout << "╚════════════════════════════════════════╝" << std::endl;
	FragTrap frag("Bomber");

	std::cout << "\n╔════════════════════════════════════════╗" << std::endl;
	std::cout << "║  Test 2: Les trois types de robots    ║" << std::endl;
	std::cout << "╚════════════════════════════════════════╝" << std::endl;
	ClapTrap clap("Clappy");
	ScavTrap scav("Guardian");
	FragTrap bomb("Exploder");

	std::cout << "\n--- Attaques ---" << std::endl;
	clap.attack("Enemy");
	scav.attack("Enemy");
	bomb.attack("Enemy");

	std::cout << "\n╔════════════════════════════════════════╗" << std::endl;
	std::cout << "║  Test 3: Capacités spéciales          ║" << std::endl;
	std::cout << "╚════════════════════════════════════════╝" << std::endl;
	scav.guardGate();
	bomb.highFivesGuys();

	std::cout << "\n╔════════════════════════════════════════╗" << std::endl;
	std::cout << "║  Test 4: Gestion de l'énergie         ║" << std::endl;
	std::cout << "╚════════════════════════════════════════╝" << std::endl;
	FragTrap energyTest("Battery");
	for (int i = 0; i < 105; i++)
	{
		if (i == 0 || i == 50 || i == 99 || i == 100 || i == 101)
			energyTest.attack("Target");
	}

	std::cout << "\n╔════════════════════════════════════════╗" << std::endl;
	std::cout << "║  Test 5: Résistance aux dégâts        ║" << std::endl;
	std::cout << "╚════════════════════════════════════════╝" << std::endl;
	ClapTrap weak("Weakling");
	FragTrap tank("Tank");

	weak.takeDamage(10);
	tank.takeDamage(50);
	tank.beRepaired(20);
	tank.takeDamage(70);
	tank.attack("Ghost");

	std::cout << "\n╔════════════════════════════════════════╗" << std::endl;
	std::cout << "║  Test 6: Constructeur de copie        ║" << std::endl;
	std::cout << "╚════════════════════════════════════════╝" << std::endl;
	FragTrap original("Original");
	FragTrap copy(original);

	original.attack("A");
	copy.attack("B");

	std::cout << "\n╔════════════════════════════════════════╗" << std::endl;
	std::cout << "║  Destruction (ordre inverse!)          ║" << std::endl;
	std::cout << "╚════════════════════════════════════════╝" << std::endl;
	return 0;
}
