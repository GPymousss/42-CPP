/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gletilly <gletilly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 22:30:46 by gletilly          #+#    #+#             */
/*   Updated: 2025/10/09 22:35:56 by gletilly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;
	std::cout << "Address of str: " << &str << std::endl;
	std::cout << "Address held by stringPTR: " << stringPTR << std::endl
			  << "Address held by stringREF: " << &stringREF << std::endl;
	std::cout << "Value of str: " << str << std::endl;
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl
			  << "Value pointed to by stringREF: " << stringREF << std::endl;
	return 0;
}
