/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:56:12 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/22 15:55:03 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.Class.hpp"

void	ft_loading(void)
{
	std::cout << "loading test:";
	std::cout << "||||||||||||" << std::endl;
    std::cout << "||||||||||||" << std::endl;
    std::cout << "||||||||||||" << std::endl;
    std::cout << "||||||||||||" << std::endl;
    std::cout << "||||||||||||" << std::endl;
	std::cout << "start test:" << std::endl;
}

int	main(int ac, char **av)
{
	Harl harl;
	std::stringstream ss;
	std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string result;
	if (ac != 1 && ac != 2)
	{
		std::cout << "this program does not need any arguments for standard work" << std::endl;
		std::cout << "for test mode use argument test";
		return (1);
	}

	std::cout << "hello i'm Harl" << std::endl;
	if (ac == 2 && std::string(av[1]) == "test")
	{
		std::cout << "test mode activated" << std::endl;
		ft_loading();
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
	else
		std::cout << "this program does not work with " << std::string(av[1]) << std::endl;

	return (0);
}