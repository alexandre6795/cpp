/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.Class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:21:32 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/29 14:10:40 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.Class.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->_Hit = 100;
	this->_Energy = 100;
	this->_Attack = 30;
	std::cout <<GREEN<< "FragTrap default constructor called" <<RESET<< std::endl;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_Name = name;
	this->_Hit = 100;
	this->_Energy = 100;
	this->_Attack = 30;
	std::cout <<GREEN<< "FragTrap  name constructor called" << RESET<<std::endl;
}

FragTrap::~FragTrap()
{
	std::cout <<RED<< "FragTrap default destructor called" << RESET<<std::endl;
	return ;
}
FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->operator=(copy);
}
FragTrap & ::FragTrap::operator=(const FragTrap &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->_Name = copy._Name;
		this->_Hit = copy._Hit;
		this->_Energy = copy._Energy;
		this->_Attack = copy._Attack;
	}
	return (*this);
}
void FragTrap::hightFivesGuys(void)
{
    std::cout << "COME ON GUUUUYS, GIVE ME A HIGHFIVES !" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (this->_Energy > 0 && this->_Hit > 0)
	{
		this->_Energy--;
		std::cout << "FragTrap " << _Name << " repair " << amount << std::endl;
		if (amount + this->_Hit >= 100)
			this->_Hit = 100;
		else
			this->_Hit += amount;
		// this->Status();
	}
	else
	{
		std::cout << "FragTrap " << _Name << " can't repair ";
		if (this->_Hit == 0)
			std::cout << " my life is gone ";
		else
			std::cout << " i don't have enough energy for nothing";
		std::cout << std::endl;
	}
}
void FragTrap::attack(const std::string &name)
{
	int	tmp;

	tmp = this->_Energy;
	if (tmp > 0 && this->_Hit > 0)
	{
		this->_Energy--;
		std::cout << "FragTrap " << _Name << " attacks " << name << " causing " << _Attack << " points of damage!" << std::endl;
		std::cout << "now i'm more tired my energy " << tmp << " drop to " << _Energy << std::endl;
	}
	else
	{
		std::cout << _Name << " i can't fight more ";
		if (this->_Hit == 0)
			std::cout << " my life is gone ";
		else
			std::cout << " i don't have enough energy for nothing";
		std::cout << std::endl;
	}
}
