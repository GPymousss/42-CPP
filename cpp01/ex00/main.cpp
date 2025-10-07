/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gletilly <gletilly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 08:48:06 by gletilly          #+#    #+#             */
/*   Updated: 2025/10/07 08:48:25 by gletilly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie*	zombie1 = newZombie("HeapZombie");
	Zombie*	zombie2 = newZombie("AnotherHeapZombie");

	zombie1->announce();
	zombie2->announce();

	delete zombie1;
	delete zombie2;

	randomChump("StackZombie");
	return (0);
}
