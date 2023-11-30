/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.Class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:03:53 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/28 09:24:25 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.Class.hpp"

Animal::Animal()
{
	std::cout << GREEN << "Animal Default constructor called" <<RESET<< std::endl;
	return ;
}

Animal::Animal(std::string name) : _Type(name)
{
	std::cout << GREEN << "Animal name constructor called" <<RESET<< std::endl;
	return ;
}
Animal::~Animal()
{
	std::cout << RED << "Animal Destructor called" <<RESET<< std::endl;
	return ;
}
Animal::Animal(const Animal &copy)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	this->operator=(copy);
}
Animal & ::Animal::operator=(const Animal &copy)
{
	std::cout << " Animal Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->_Type = copy._Type;
	}
	return (*this);
}
void Animal ::makeSound() const
{
	std::cout << "Standard Animal sound.mp3" << std::endl;
}
std::string Animal::getType() const
{
    return (this->_Type);
}
