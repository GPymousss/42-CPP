/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gletilly <gletilly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 07:47:55 by gletilly          #+#    #+#             */
/*   Updated: 2025/12/03 08:07:44 by gletilly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

#include "harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage: " << argv[0] << " <level>" << std::endl;
		std::cerr << "Example: ./harl INFO" << std::endl;
		return (1);
	}

	Harl().complain(argv[1]);

	return (0);
}
