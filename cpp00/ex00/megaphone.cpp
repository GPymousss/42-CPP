/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gletilly <gletilly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 20:42:15 by gletilly          #+#    #+#             */
/*   Updated: 2025/10/04 21:50:43 by gletilly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

int	main(int argc, char **argv)
{
	for (int i = 1; i < argc; i++) {
		std::string tmp = argv[i];
		std::transform(tmp.begin(), tmp.end(), tmp.begin(), ::toupper);
		std::cout << tmp;
	}
	std::cout << std::endl;
	return 0;
}