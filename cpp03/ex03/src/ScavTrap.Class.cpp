/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.Class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:21:32 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/29 08:48:03 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.Class.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_Hit = 100;
	this->_Energy = 50;
	this->_Attack = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_Hit = 100;
	this->_Energy = 50;
	this->_Attack = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap default destructor called" << std::endl;
	return ;
}
ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->operator=(copy);
}
ScavTrap & ::ScavTrap::operator=(const ScavTrap &copy)
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
void ScavTrap::guardGate(void)
{
	std::cout << _Name << " Hold the door(guard mode)" << std::endl;
}
void ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_Energy > 0 && this->_Hit > 0)
	{
		this->_Energy--;
		std::cout << "ScavTrap " << _Name << " repair " << amount << std::endl;
		if (amount + this->_Hit >= 100)
			this->_Hit = 100;
		else
			this->_Hit += amount;
		// this->Status();
	}
	else
	{
		std::cout << "ScavTrap " << _Name << " can't repair ";
		if (this->_Hit == 0)
			std::cout << " my life is gone ";
		else
			std::cout << " i don't have enough energy for nothing";
		std::cout << std::endl;
	}
}
void ScavTrap::attack(const std::string &name)
{
	int	tmp;

	tmp = this->_Energy;
	if (tmp > 0 && this->_Hit > 0)
	{
		this->_Energy--;
		std::cout << "ScavTrap " << _Name << " attacks " << name << " causing " << _Attack << " points of damage!" << std::endl;
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
