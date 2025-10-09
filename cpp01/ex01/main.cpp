/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gletilly <gletilly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 21:33:10 by gletilly          #+#    #+#             */
/*   Updated: 2025/10/09 21:52:25 by gletilly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	int N = 5;
	Zombie* horde = Zombie::zombieHorde(N, "Zombie");

	for (int i = 0; i < N; i++) {
		horde[i].announce();
	}

	delete[] horde;
	return 0;
}
