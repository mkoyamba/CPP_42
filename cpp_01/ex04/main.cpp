/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:48:44 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/07 11:43:17 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

void	write_file(std::string file, std::string s1, std::string s2)
{
	std::ifstream ifs(file);
	if (ifs.good())
	{
		if (ifs.peek() == std::ifstream::traits_type::eof())
			std::cout << "Error: Empty file" << std::endl;
		else
		{
			std::ofstream ofs(file.append(".replace").data());
			while (ifs.good() && ofs.good())
			{
				std::string line;
				std::size_t i;
				std::getline(ifs, line);
				i = line.find(s1, 0);
				while (i != std::string::npos)
				{
					line.erase(i, s1.length());
					line.insert(i, s2);
					i = line.find(s1, i);
				}
				ofs << line;
				if (ifs.eof())
					break ;
				ofs << std::endl;
			}
			ifs.close();
			ofs.close();
		}
	}
	else
		std::cout << "Error: " << strerror(errno) << std::endl;
}

int main(int argc, char **argv)
{
	if (argc == 4)
		write_file(argv[1], argv[2], argv[3]);
	else
		std::cout << "Invalid parameters. -> ./replace <filename> <s1> <s2>" << std::endl;
	return (0);
}