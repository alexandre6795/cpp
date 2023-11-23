/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:56:12 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/23 09:59:33 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.Class.hpp"

int	is_valid(std::string av)
{
	std::string str[5] = {"DEBUG", "INFO", "WARNING", "ERROR","TEST"};
	for (int i = 0; i < 5; ++i)
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
	if (ac == 1)
	{
		std::cout << "unable argument DEBUG ,INFO ,WARNING ,ERROR,TEST " << std::endl;
		return (1);
	}
	if (ac >= 2 && is_valid(std::string(av[1])) == 0)
	{
		std::cout << "this program does not work with " << std::string(av[1]) << std::endl;
		std::cout << "for test mode use argument TEST" << std::endl;
		std::cout << "unable argument DEBUG ,INFO ,WARNING ,ERROR,TEST " << std::endl;
		std::cout << "hello i'm Harl" << std::endl;
		return (1);
	}
	if (ac == 2 && std::string(av[1]) == "TEST")
	{
		std::cout << "test mode activated:" << std::endl;
		for (int j = 0; j < 4; j++)
		{
			std::cout << std::endl;
			result = str[j];
			harl.complain(result);
		}
	}

	harl.complain(std::string(av[1]));

	return (0);
}