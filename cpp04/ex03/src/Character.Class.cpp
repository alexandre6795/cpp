/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.Class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:44:15 by aherrman          #+#    #+#             */
/*   Updated: 2023/12/01 10:57:01 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.Class.hpp"

Character::Character() : _Name("UNKNOW")
{
	for (int i = 0; i < 3; i++)
		_Inventory[i] = NULL;
	std::cout << GREEN << "Character Default constructor called" << RESET << std::endl;
	return ;
}

Character::Character(std::string const &name) : _Name(name)
{
	for (int i = 0; i < 3; i++)
		_Inventory[i] = NULL;
	std::cout << GREEN << "Character type constructor called" << RESET << std::endl;
}

Character::~Character()
{
			

	for (int i = 0; i < 3; i++)
	{
		if (_Inventory[i] != NULL)
		delete _Inventory[i];
	}
	std::cout << RED << "Character Destructor called" << RESET << std::endl;
	return ;
}
Character::Character(const Character &copy)
{
	*this = copy;
}

Character & ::Character::operator=(const Character &copy)
{
			

	std::cout << " Character Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->_Name = copy._Name;
		for (int i = 0; i < 3; i++)
		{
			delete _Inventory[i];
			this->_Inventory[i] = copy._Inventory[i]->clone();
		}
	}
	return (*this);
}
void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_Inventory[i] == NULL)
		{
			_Inventory[i] = m;
			break ;
		}
		if (i == 3 && _Inventory[3])
			std::cout << "Inventory is full" << std::endl;
	}
}
void Character ::unequip(int idx)
{
	if (idx > 3 || idx < 0)
		std::cout << "invalid index number" << std::endl;
	else if (_Inventory[idx] == NULL)
		std::cout << "empty slot" << std::endl;
	else
		_Inventory[idx] = NULL;
}
void Character::use(int idx, ICharacter &target)
{
	if (idx > 3 || idx < 0)
		std::cout << "invalid index number" << std::endl;
	else if (_Inventory[idx] == NULL)
		std::cout << "empty slot" << std::endl;
	else
		_Inventory[idx]->use(target);
}
std::string const &Character::getName() const
{
	return (this->_Name);
}
