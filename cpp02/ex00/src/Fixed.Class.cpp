/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.Class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:03:53 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/23 13:59:18 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.Class.hpp"

Fixed::Fixed() : _val(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}
Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	// this->_val = copy._val;
	// this->_val = copy.getRawBits();
    this->operator=(copy);
}
int Fixed::getRawBits(void) const
{
    std::cout <<"getRawBits member function called"<< std::endl;
	return (_val);
}
Fixed & ::Fixed::operator=(const Fixed &copy)
{
    std::cout <<"Copy assignment operator called"<< std::endl;
	if (this != &copy)
	{
        _val = copy.getRawBits();
		//_val = copy._val;
	}
    return(*this);
}

void Fixed::setRawBits(int const raw)
{
    std::cout <<"SET"<< std::endl;
	_val = raw;
}
