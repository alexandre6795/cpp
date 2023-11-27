/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.Class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:03:53 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/27 12:24:19 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.Class.hpp"

Fixed::Fixed() : _val(0)
{
	//std::cout << "Default constructor called" << std::endl;
	return ;
}
Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
	return ;
}
Fixed::Fixed(const Fixed &copy)
{
	//std::cout << "Copy constructor called" << std::endl;
	// this->_val = copy._val;
	this->operator=(copy);
	// this->_val = copy.getRawBits();
}

Fixed::Fixed(const int v) : _val(v << _fractionnaire)
{
	//std::cout << "Int constructor called" << std::endl;
	return ;
}
Fixed::Fixed(const float f) : _val(roundf(f * (1 << _fractionnaire)))
{
	//std::cout << "Float constructor called" << std::endl;
	return ;
}
int Fixed::getRawBits(void) const
{
	return (_val);
}
Fixed & ::Fixed::operator=(const Fixed &other)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_val = other.getRawBits();
		//_val = copy._val;
	}
	return (*this);
}
bool Fixed::operator<(const Fixed &other) const
{
//	std::cout << "cest <" << std::endl;
	return (this->_val < other._val);
}
bool Fixed::operator>(const Fixed &other) const
{
//	std::cout << "cest >" << std::endl;
	return (this->_val > other._val);
}
bool Fixed::operator<=(const Fixed &other) const
{
//	std::cout << "cest <=" << std::endl;
	return (this->_val <= other._val);
}
bool Fixed::operator>=(const Fixed &other) const
{
//	std::cout << "cest >=" << std::endl;
	return (this->_val >= other._val);
}
bool Fixed::operator!=(const Fixed &other) const
{
	//std::cout << "cest !=" << std::endl;
	return (this->_val != other._val);
}
bool Fixed::operator==(const Fixed &other) const
{
	//std::cout << "cest ==" << std::endl;
	return (this->_val == other._val);
}
Fixed Fixed::operator+(const Fixed &other) const
{
	//std::cout << "cest +" << std::endl;
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed &other) const
{
	//std::cout << "cest -" << std::endl;
	return (Fixed(this->toFloat() - other.toFloat()));
}
Fixed Fixed::operator*(const Fixed &other) const
{
	//std::cout << "cest *" << std::endl;
	return (Fixed(this->toFloat() * other.toFloat()));
}
Fixed Fixed::operator/(const Fixed &other) const
{
	//std::cout << "cest /" << std::endl;
	return (Fixed(this->toFloat() / other.toFloat()));
}
std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
	// std::cout <<" operator value before " <<rhs.getRawBits();
	o << rhs.toFloat();
	return (o);
}
Fixed & ::Fixed::operator++()
{
	//std::cout << "cest ++i" << std::endl;
	++_val;
	return (*this);
}
Fixed & ::Fixed::operator--()
{
	//std::cout << "cest --i" << std::endl;
	--this->_val;
	return (*this);
}
Fixed Fixed::operator++(int)
{
	//std::cout << "cest i++" << std::endl;
	Fixed tmp(*this);
	++this->_val;
	return (tmp);
}
Fixed Fixed::operator--(int)
{
	//std::cout << "cest i--" << std::endl;
	Fixed tmp(*this);
	--_val;
	return (tmp);
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

const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2)
{
	return ((f1._val < f2._val) ? f1 : f2);
}
const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2)
{
	return ((f1._val > f2._val) ? f1 : f2);
}
Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
	return ((f1._val > f2._val) ? f1 : f2);
}
Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
	return ((f1._val < f2._val) ? f1 : f2);
}
