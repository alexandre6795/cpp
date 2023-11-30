/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.Class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:03:53 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/28 09:24:25 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.Class.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << GREEN << "WrongAnimal Default constructor called" <<RESET<< std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string name) : _Type(name)
{
	std::cout << GREEN << "WrongAnimal name constructor called" <<RESET<< std::endl;
	return ;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << RED << "WrongAnimal Destructor called" <<RESET<< std::endl;
	return ;
}
WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	this->operator=(copy);
}
WrongAnimal & WrongAnimal::operator=(const WrongAnimal &copy)
{
	std::cout << " WrongAnimal Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->_Type = copy._Type;
	}
	return (*this);
} void WrongAnimal ::makeSound() const
{
	std::cout << "Standard WrongAnimal sound.mp3" << std::endl;
}
std::string WrongAnimal::getType() const
{
    return (this->_Type);
}
