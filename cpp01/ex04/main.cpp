/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 09:09:15 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/21 10:31:44 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>

int	main(int ac, char **av)
{
	size_t	i;

	if (ac != 4)
	{
		std::cout << " need 3 arguments filename ,string one ,string two no more no less " << std::endl;
		return (1);
	}
	std::ifstream ifs(av[1]);
	std::string s1 = av[2];
	std::string s2 = av[3];
	if (!ifs.is_open())
	{
		std::cout << "can't open this file " << std::endl;
		return (1);
	}
	std::ostringstream contentStream;
	contentStream << ifs.rdbuf();
	std::string content = contentStream.str();
	ifs.close();
	i = 0;
	while ((i = content.find(s1, i)) != std::string::npos)
	{
		content = content.substr(0, i) + s2 + content.substr(i + s1.length());
		i += s2.length();
	}
	std::string tmp = av[1];
	tmp = tmp + ".replace";
	std::ofstream out((tmp.c_str()));
	if (!out.is_open())
	{
		std::cout << "can't open this file " << std::endl;
		return (1);
	}
	out << content;
	out.close();
}
