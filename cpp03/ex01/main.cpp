/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gletilly <gletilly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:50:24 by gletilly          #+#    #+#             */
/*   Updated: 2025/12/09 17:40:26 by gletilly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "=== Test 1: Construction chaining ===" << std::endl;
	ScavTrap scav("Guardian");

	std::cout << "\n=== Test 2: ScavTrap vs ClapTrap ===" << std::endl;
	ClapTrap clap("Weakling");
	ScavTrap strong("Terminator");

	clap.attack("Target");
	strong.attack("Target");

	std::cout << "\n=== Test 3: Special ability ===" << std::endl;
	strong.guardGate();

	std::cout << "\n=== Test 4: Energy management ===" << std::endl;
	for (int i = 0; i < 52; i++)
		strong.attack("Dummy");

	std::cout << "\n=== Destruction ===" << std::endl;
	return 0;
}
