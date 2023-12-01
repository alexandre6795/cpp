/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.Class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:03:53 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/28 09:24:25 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.Class.hpp"

WrongCat::WrongCat()
{
	std::cout << GREEN << "WrongCat Default constructor called" <<RESET<< std::endl;
	return ;
}

WrongCat::WrongCat(std::string name) : WrongAnimal(name)
{
	std::cout << GREEN << "WrongCat name constructor called" << RESET<<std::endl;
	return ;
}
WrongCat::~WrongCat()
{
	std::cout << RED << "WrongCat Destructor called" <<RESET<< std::endl;
	return ;
}
WrongCat::WrongCat(const WrongCat &copy)
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
	this->operator=(copy);
}
WrongCat & ::WrongCat::operator=(const WrongCat &copy)
{
	std::cout << " WrongCat Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->_Type = copy._Type;
	}
	return (*this);
}
void WrongCat ::makeSound() const
{
	std::cout<<"Standard WrongCat sound.mp3"<<std::endl;
}