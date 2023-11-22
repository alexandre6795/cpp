/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:56:12 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/22 16:38:54 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.Class.hpp"

int	is_valid(std::string av)
{
	std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; ++i)
	{
		if (av == str[i])
			return (1);
	}
	return (0);
}

int	main(int ac, char **av)
{
	Harl harl;
	std::stringstream ss;
	std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string result;
	if (ac > 2)
	{
		std::cout << "this program does not need any arguments for standard work" << std::endl;
		std::cout << "for test mode use argument test" << std::endl;
		return (1);
	}

	std::cout << "hello i'm Harl" << std::endl;
	if (ac == 2 && std::string(av[1]) == "TEST")
	{
		std::cout << "test mode activated" << std::endl;
		for (int j = 0; j < 4; j++)
		{
			result = str[j];
			harl.complain(result);
		}
	}
	else if (ac == 1)
	{
		std::srand(std::time(0));
		int i = std::rand() % 4;
		result = str[i];
		harl.complain(result);
	}
	else if (is_valid(std::string(av[1])) == 1)
		harl.complain(std::string(av[1]));
	else
	{
		std::cout << "this program does not work with " << std::string(av[1]) << std::endl;
		std::cout << "unable argument DEBUG , INFO , WARNING ,ERROR,TEST " << std::endl;
	}

	return (0);
}