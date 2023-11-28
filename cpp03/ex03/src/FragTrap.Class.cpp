/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.Class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:21:32 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/28 15:14:50 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.Class.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->_Hit = 100;
	this->_Energy = 100;
	this->_Attack = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}
FragTrap::FragTrap(std::string name) : ClapTrap()
{
	this->_Name = name;
	this->_Hit = 100;
	this->_Energy = 100;
	this->_Attack = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap default destructor called" << std::endl;
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
void FragTrap::guardGate(void)
{
	std::cout << _Name << " Hold the door(guard mode)" << std::endl;
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
