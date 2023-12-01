/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.Class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:03:53 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/28 09:24:25 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ICharacter.Class.hpp"

ICharacter::ICharacter()
{
	std::cout << GREEN << "ICharacter Default constructor called" << RESET << std::endl;
	return ;
}

ICharacter::ICharacter(const std::string const &name) : _Name(name)
{
	std::cout << GREEN << "ICharacter name constructor called" << RESET << std::endl;
	return ;
}
ICharacter::~ICharacter()
{
	for (int i = 0; i < 3; i++)
	{
		if (_Inventory[i])
			delete this->_Inventory[i];
	}
	std::cout << RED << "ICharacter Destructor called" << RESET << std::endl;
	return ;
}
ICharacter::ICharacter(const ICharacter &copy)
{
	std::cout << "ICharacter Copy constructor called" << std::endl;
	*this = copy;
}
ICharacter & ::ICharacter::operator=(const ICharacter &copy)
{
	std::cout << " ICharacter Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->_Name = copy._Name;
		for (int i = 0; i < 3; i++)
		{
			delete this->_Inventory[i];
			this->_Inventory[i] = copy._Inventory[i];
		}
	}
	return (*this);
}

void ICharacter::equip(AMateria *m)
{
}
void ICharacter::unequip(int idx)
{
}
void ICharacter::use(int idx, ICharacter &taget)
{
}