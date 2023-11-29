/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.Class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:16:55 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/29 11:34:57 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.Class.hpp"

DiamondTrap::DiamondTrap()
{
	this->_Name = "noname";
	ClapTrap::_Name = _Name + "_clap_name";
	this->_Hit = FragTrap::getHit();
	this->_Energy = ScavTrap::_Energy;
	this->_Attack = FragTrap::_Attack;
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name),FragTrap(name), ScavTrap(name) 
{
	this->_Name = name;
	ClapTrap::_Name = _Name + "_clap_name";
	this->_Hit = FragTrap::getHit();
	this->_Energy = ScavTrap::_Energy;
	this->_Attack = FragTrap::_Attack;
	std::cout << "DiamondTrap name constructor called" << std::endl;
}
DiamondTrap::~DiamondTrap()
{
}
DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->operator=(copy);
}
DiamondTrap & ::DiamondTrap::operator=(const DiamondTrap &copy)
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
void DiamondTrap::whoAmI()
{
	std::cout << "my  Diamond name is " << this->_Name << " my ClapTrap name is " << ClapTrap::getName() << ClapTrap::_Name <<  std::endl;
}
void DiamondTrap::beRepaired(unsigned int amount)
{
	if (this->_Energy > 0 && this->_Hit > 0)
	{
		this->_Energy--;
		std::cout << "DiamondTrap " << _Name << " repair " << amount << std::endl;
		if (amount + this->_Hit >= 100)
			this->_Hit = 100;
		else
			this->_Hit += amount;
		// this->Status();
	}
	else
	{
		std::cout << "DiamondTrap " << _Name << " can't repair ";
		if (this->_Hit == 0)
			std::cout << " my life is gone ";
		else
			std::cout << " i don't have enough energy for nothing";
		std::cout << std::endl;
	}
}
void DiamondTrap::attack(const std::string &name)
{
	int tmp;

	tmp = this->_Energy;
	if (tmp > 0 && this->_Hit > 0)
	{
		this->_Energy--;
		std::cout << "DiamondTrap " << _Name << " attacks " << name << " causing " << _Attack << " points of damage!" << std::endl;
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