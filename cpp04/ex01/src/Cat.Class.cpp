/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.Class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:03:53 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/28 09:24:25 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.Class.hpp"

Cat::Cat(): _Brain(new Brain)
{
	std::cout << GREEN << "Cat Default constructor called" <<RESET<< std::endl;
	return ;
}

Cat::Cat(std::string name) : Animal(name) ,_Brain(new Brain)
{
	std::cout << GREEN << "Cat name constructor called" << RESET<<std::endl;
	return ;
}
Cat::~Cat()
{
	std::cout << RED << "Cat Destructor called" <<RESET<< std::endl;
	delete (_Brain);
	return ;
}
Cat::Cat(const Cat &copy)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	*this=copy;
}
Cat & ::Cat::operator=(const Cat &copy)
{
	std::cout << " Cat Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->_Brain = new Brain(*copy._Brain);
		this->_Type = copy._Type;
	}
	return (*this);
}
void Cat ::makeSound() const
{
	std::cout<<"Standard Cat sound.mpcat"<<std::endl;
}