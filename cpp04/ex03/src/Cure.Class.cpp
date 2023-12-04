/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.Class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:44:15 by aherrman          #+#    #+#             */
/*   Updated: 2023/12/01 10:57:01 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.Class.hpp"

Cure::Cure() 
{
	this->_Type="cure";
	std::cout << GREEN << "Cure Default constructor called" << RESET << std::endl;
	return ;
}
Cure::~Cure()
{
	std::cout << RED << "Cure Destructor called" << RESET << std::endl;
	return ;
}
Cure::Cure(const Cure &copy)
{
	*this = copy;
}

Cure & ::Cure::operator=( Cure const &copy)
{
	std::cout << " Cure Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->_Type = copy._Type;
	}
	return (*this);
}
void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << " 's wounds*" << std::endl;
}
AMateria *Cure::clone() const
{
	return (new Cure(*this));
}