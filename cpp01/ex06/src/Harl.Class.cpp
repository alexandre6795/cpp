/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.Class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:50:12 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/23 09:56:58 by aherrman         ###   ########.fr       */
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
	std::cout << "DEBUG:" <<  "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<<std::endl;
	info();
	return ;
}
void Harl::info(void)
{
	std::cout << "INFO:" << GREEN<<"I cannot believe adding extra bacon costs more money. You didn\'t putenough bacon in my burger! If you did, I wouldn\'t be asking for more!"<< RESET << std::endl;
	warning();
	return ;
}
void Harl::warning(void)
{
	std::cout << "WARNING:" <<YELLOW<< "I think I deserve to have some extra bacon for free. I\'ve been coming for years whereas you started working here since last month."<<RESET<<std::endl;
	error();
	return ;
}
void Harl::error(void)
{
	std::cout << "ERROR:" <<RED<<"This is unacceptable! I want to speak to the manager now."<<RESET<< std::endl;
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