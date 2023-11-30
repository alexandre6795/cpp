/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.Class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:16:55 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/30 12:06:41 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.Class.hpp"

DiamondTrap::DiamondTrap()
{
	this->_Name = "noname";
	ClapTrap::_Name = _Name + "_clap_name";
	// this->_Hit = FragTrap::getHit();
	// 	this->_Energy = ScavTrap::getEnergy();
	// this->_Attack = FragTrap::getAttack();
	// this->_Hit = FragTrap::_Hit;
	// this->_Energy = ScavTrap::_Energy;
	// this->_Attack = FragTrap::_Attack;
		this->_Hit = 100;
	this->_Energy = 50;
	this->_Attack = 30;
	std::cout << GREEN<<"DiamondTrap default constructor called" <<RESET<<std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name),ScavTrap(name), FragTrap(name) 
{
	this->_Name = name;
	ClapTrap::_Name = _Name + "_clap_name";
	// this->_Hit = FragTrap::getHit();
	// this->_Energy = ScavTrap::_Energy;
	// this->_Attack = FragTrap::_Attack;
			this->_Hit = 100;
	this->_Energy = 50;
	this->_Attack = 30;
	std::cout <<GREEN<< "DiamondTrap name constructor called" <<RESET<< std::endl;
}
DiamondTrap::~DiamondTrap()
{
	std::cout <<RED<< "DiamondTrap destructor called" <<RESET<< std::endl;
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
	std::cout << "my  Diamond name is " << this->_Name << " my ClapTrap name is " << ClapTrap::getName()  <<  std::endl;
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
 ScavTrap::attack(name);
}