/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.Class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:03:53 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/28 09:24:25 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.Class.hpp"

Dog::Dog() : _Brain(new Brain)
{
	std::cout << GREEN << "Dog Default constructor called" << RESET << std::endl;
	return ;
}

Dog::Dog(std::string name) : Animal(name), _Brain(new Brain)
{
	std::cout << GREEN << "Dog name constructor called" << RESET << std::endl;
	return ;
}
Dog::~Dog()
{
	std::cout << RED << "Dog Destructor called" << RESET << std::endl;
	delete (_Brain);
	return ;
}
Dog::Dog(const Dog &copy)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	this->operator=(copy);
}
Dog & ::Dog::operator=(const Dog &copy)
{
	std::cout << " Dog Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->_Brain = new Brain(*copy._Brain);
		this->_Type = copy._Type;
	}
	return (*this);
}
void Dog ::makeSound() const
{
	std::cout << "Standard Dog sound.mp3" << std::endl;
}