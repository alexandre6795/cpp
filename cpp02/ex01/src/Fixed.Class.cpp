/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.Class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:03:53 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/23 15:46:10 by aherrman         ###   ########.fr       */
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
	this->operator=(copy);
	// this->_val = copy.getRawBits();
}

Fixed::Fixed(const int v) : _val(v << _fractionnaire)
{
	std::cout << "Int constructo<<r called" << std::endl;
	return ;
}
Fixed::Fixed(const float f) : _val(roundf(f *(1<<_fractionnaire)))
{
	std::cout << f << " after frac " << _val << std::endl;
	std::cout << "Float constructor called" << std::endl;
	return ;
}
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_val);
}
Fixed & ::Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		_val = copy.getRawBits();
		//_val = copy._val;
	}
	return (*this);
}
std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
	// std::cout <<" operator value before " <<rhs.getRawBits();
	o << rhs.toFloat();
	return (o);
}

float Fixed::toFloat(void) const
{
	return (((static_cast<float>(_val)
				/ static_cast<float>(1 << _fractionnaire))));
}
int Fixed::toInt(void) const
{
	return (_val >> _fractionnaire);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "SET" << std::endl;
	_val = raw;
}
