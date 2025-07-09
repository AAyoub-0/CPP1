/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumall <aboumall42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 02:26:55 by aboumall          #+#    #+#             */
/*   Updated: 2025/07/09 03:50:25 by aboumall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

static std::string ft_replace(std::string& str, size_t pos, int len, const std::string& replace) {
	std::string::size_type n = str.length();
	if (pos >= n || len < 0 || pos + len > n) {
		return str;
	}
	str.erase(pos, len);
	str.insert(pos, replace);
	return str;
}

bool replaceOccurrences(std::string fileName, const std::string &occurrence, const std::string &replace) {
	std::ifstream file(fileName.c_str());
	if (!file.is_open()) {
		std::cerr << "Error: Could not open file " << fileName << std::endl;
		return false;
	}
	
	std::string content;
	std::string line;
	while (std::getline(file, line)) {
		size_t pos = 0;
		while ((pos = line.find(occurrence, pos)) != std::string::npos) {
			line = ft_replace(line, pos, occurrence.length(), replace);
			pos += replace.length();
		}
		content += line + "\n";
	}
	file.close();
	std::ofstream out(fileName.c_str());
	if (!out.is_open())
		return false;
	out << content;
	out.close();
	return true;
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <occurrence> <replace>" << std::endl;
		return 1;
	}
	std::string filename = argv[1];
	std::string occurence = argv[2];
	std::string replace = argv[3];

	std::ifstream infile(filename.c_str());
	if (!infile.is_open())
	{
		std::cerr << "Error: Could not open file " << filename << std::endl;
		return 1;
	}

	std::ofstream outfile((filename + ".replace").c_str());
	if (!outfile.is_open())
	{
		std::cerr << "Error: Could not create file " << filename << ".replace" << std::endl;
		return 1;
	}
	
	std::string line;
	while (std::getline(infile, line))
	{
		outfile << line << std::endl;
	}

	infile.close();
	outfile.close();
	
	if (!replaceOccurrences(filename + ".replace", occurence, replace))
	{
		std::cerr << "Error: Could not replace occurrences of " << occurence << " with " << replace << " in file " << filename << std::endl;
		return 1;
	}
	
	return 0;
}