/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gletilly <gletilly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 21:35:13 by gletilly          #+#    #+#             */
/*   Updated: 2025/10/09 21:57:02 by gletilly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {
public:
	Zombie();
	~Zombie();
	void announce(void);
	static Zombie* zombieHorde(int N, std::string name);

private:
	std::string name;
};

#endif
