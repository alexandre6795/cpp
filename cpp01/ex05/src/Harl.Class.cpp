/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.Class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:50:12 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/22 16:40:10 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.Class.hpp"

Harl::Harl()
{
	return ;
}
Harl::~Harl()
{
	return ;
}

void Harl::debug(void)
{
	std::cout << "DEBUG:" << std::endl;
	return ;
}
void Harl::info(void)
{
	std::cout << "INFO:" << std::endl;
	return ;
}
void Harl::warning(void)
{
	std::cout << "WARNING:" << std::endl;
	return ;
}
void Harl::error(void)
{
	std::cout << "ERROR:" << std::endl;
	return ;
}
void Harl::complain(std::string level)
{
	std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*functions[4])() = {&Harl::debug, &Harl::info, &Harl::warning,
		&Harl::error};
	for (int i = 0; i < 4; ++i)
	{
		if (level == str[i])
		{
			(this->*functions[i])();
			break ;
		}
	}
}