/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.Class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:03:53 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/28 09:24:25 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.Class.hpp"

ClapTrap::ClapTrap() : _Hit(10), _Energy(10), _Attack(0)
{
	std::cout <<GREEN<< "Default constructor called" <<RESET<< std::endl;
	//std::cout << "Hello my name is unknow i have " << _Hit << "HP my Energy is over " << _Energy << " and i can deal " << _Attack << " damage per attack" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _Name(name), _Hit(10), _Energy(10),
	_Attack(0)
{
	std::cout <<GREEN<< "name constructor called" <<RESET<< std::endl;
	//std::cout << "Hello my name is " << _Name << " i have " << _Hit << "HP my Energy is over " << _Energy << " and i can deal " << _Attack << " damage per attack" << std::endl;
	return ;
}
ClapTrap::~ClapTrap()
{
	std::cout <<RED<< "Destructor called" <<RESET<< std::endl;
	return ;
}
ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->operator=(copy);
}
ClapTrap & ::ClapTrap::operator=(const ClapTrap &copy)
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

void ClapTrap::Status()
{
	std::cout << "Hello my name is " << _Name << " i have " << _Hit << " HP my Energy is over " << _Energy << " and i can deal " << _Attack << " damage per attack" << std::endl;
	return ;
}

void ClapTrap::attack(const std::string &name)
{
	int	tmp;

	tmp = this->_Energy;
	if (tmp > 0 && this->_Hit > 0)
	{
		this->_Energy--;
		std::cout << "ClapTrap " << _Name << " attacks " << name << " causing " << _Attack << " points of damage!" << std::endl;
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

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << _Name << " take " << amount << " damage " << std::endl;
	if (amount >= this->_Hit)
		this->_Hit = 0;
	else
		this->_Hit -= amount;
	this->Status();
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_Energy > 0 && this->_Hit > 0)
	{
		this->_Energy--;
		std::cout << "ClapTrap " << _Name << " repair " << amount << std::endl;
		if (amount + this->_Hit >= 10)
			this->_Hit = 10;
		else
			this->_Hit += amount;
		this->Status();
	}
	else
	{
		std::cout << "ClapTrap " << _Name << " can't repair ";
		if (this->_Hit == 0)
			std::cout << " my life is gone ";
		else
			std::cout << " i don't have enough energy for nothing";
		std::cout << std::endl;
	}
}

// SET ET GET //
void ClapTrap::setName(std::string name)
{
	this->_Name = name;
}

std::string ClapTrap::getName(void)
{
	return (_Name);
}
void ClapTrap::setHit(unsigned int amount)
{
	this->_Hit = amount;
}

unsigned int ClapTrap::getHit(void)
{
	return (_Hit);
}
void ClapTrap::setAttack(unsigned int amount)
{
	this->_Attack = amount;
}

unsigned int ClapTrap::getAttack(void)
{
	return (_Attack);
}
void ClapTrap::setEnergy(unsigned int amount)
{
	this->_Energy = amount;
}

unsigned int ClapTrap::getEnergy(void)
{
	return (_Energy);
}
