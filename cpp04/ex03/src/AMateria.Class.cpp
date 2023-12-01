/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.Class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:03:53 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/28 09:24:25 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.Class.hpp"

AMateria::AMateria() : _Type("unknow")
{
	std::cout << GREEN << "AMateria Default constructor called" << RESET << std::endl;
	return ;
}

AMateria::AMateria(const std::string const &type) : _Type(type)
{
	std::cout << GREEN << "AMateria name constructor called" << RESET << std::endl;
	return ;
}
AMateria::~AMateria()
{
	std::cout << RED << "AMateria Destructor called" << RESET << std::endl;
	return ;
}
AMateria::AMateria(const AMateria &copy)
{
	std::cout << "AMateria Copy constructor called" << std::endl;
	this->operator=(copy);
}
AMateria & ::AMateria::operator=(const AMateria &copy)
{
	std::cout << " AMateria Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->_Type = copy._Type;
	}
	return (*this);
}
const std::string AMateria::getType() const
{
	return (this->_Type);
}
void AMateria::use(ICharacter &target)
{
	(void)target;
}