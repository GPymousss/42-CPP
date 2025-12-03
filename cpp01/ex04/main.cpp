/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gletilly <gletilly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 06:33:45 by gletilly          #+#    #+#             */
/*   Updated: 2025/12/03 07:14:54 by gletilly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

std::string replace_all(const std::string& str, const std::string& s1, const std::string& s2)
{
	std::string res;
	size_t pos = 0;
	size_t found;

	while ((found = str.find(s1, pos)) != std::string::npos)
	{
		res += str.substr(pos, found - pos);
		res += s2;
		pos = found + s1.length();
	}
	res += str.substr(pos);

	return res;
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>\n";
		std::cerr << "[Example] : ./replace file.txt 'bonjour' 'salut'\n";
		return (1);
	}

	if (std::string(argv[2]).empty())
	{
		std::cerr << "Error: la chaîne à rechercher (s1) ne peut pas être vide\n";
		return (1);
	}

	std::ifstream infile(argv[1]);
	if (!infile)
	{
		std::cerr << "Error: impossible d'ouvrir le fichier '" << argv[1] << "'\n";
		return (1);
	}

	std::string content;
	std::string line;
	while (std::getline(infile, line))
	{
		content += line;
		if (!infile.eof())
			content += '\n';
	}
	infile.close();

	std::string result = replace_all(content, argv[2], argv[3]);
	std::string outfilename = std::string(argv[1]) + ".replace";

	std::ofstream outfile(outfilename.c_str());
	if (!outfile)
	{
		std::cerr << "Error: impossible de créer le fichier '" << outfilename << "'\n";
		return (1);
	}
	outfile << result;
	outfile.close();

	std::cout << "File : " << outfilename << std::endl;
	return (0);
}
