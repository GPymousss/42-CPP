/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gletilly <gletilly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 21:35:39 by gletilly          #+#    #+#             */
/*   Updated: 2025/10/09 21:39:46 by gletilly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int N, std::string name) {
	if (N <= 0)
		return NULL;
	Zombie* horde = new Zombie[N];
	for (int i = 0; i < N; i++) {
		horde[i].name = name;
	}
	return horde;
}
