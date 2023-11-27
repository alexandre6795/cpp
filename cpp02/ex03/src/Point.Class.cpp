/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.Class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:55:11 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/27 15:00:40 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.Class.hpp"

Point::Point() : _x(0), _y(0)
{
	// std::cout << "Default constructor called" << std::endl;
	return ;
}
Point::~Point()
{
	// std::cout << "Destructor called" << std::endl;
	return ;
}
Point::Point(const float posx, const float posy) : _x(posx), _y(posy)
{
	// std::cout << "point constructor called" << std::endl;
	return ;
}
Point::Point(const Point &copy) : _x(copy._x), _y(copy._y)
{
	//std::cout << "Copy constructor called" << std::endl;
}
Point &Point::operator=(const Point &other)
{
	if (this != &other)
	{
		(Fixed) this->_x = other._x;
		(Fixed) this->_y = other._y;
	}
	return (*this);
}

Fixed Point::getX(void) const
{
	return (this->_x);
}
Fixed Point::getY(void) const
{
	return (this->_y);
}
static Fixed	VectorialResult(Point const one, Point const two,
		Point const point)
{
	return (((two.getX().toFloat() - one.getX().toFloat())
			* (point.getY().toFloat() - one.getY().toFloat()))
		- ((two.getY().toFloat() - one.getY().toFloat())
			* (point.getX().toFloat() - one.getX().toFloat())));
}

// il faut faire le calcul du vecteur de chaque segment
// AB = (b.x - a.x) * (point.y - a.y) - (b.y - a.y) * (point.x - a.x);
// BC = (c.x - b.x) * (point.y - b.y) - (c.y - b.y) * (point.x - b.x);
// CA = (a.x - c.x) * (point.y - c.y) - (a.y - c.y) * (point.x - c.x);
// si les 3 resultats sont du meme signe, le point est dans le triangle
bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	// calcul pour verifier si un des point est au meme endroit
	if ((VectorialResult(a, b, point) >= 0 && VectorialResult(b, c, point) >= 0
			&& VectorialResult(c, a, point) >= 0) || (VectorialResult(a, b,
				point) <= 0 && VectorialResult(b, c, point) <= 0
			&& VectorialResult(c, a, point) <= 0))
	{
		if ((point.getX() == a.getX() && point.getY() == a.getY())
			|| (point.getX() == b.getX() && point.getY() == b.getY())
			|| (point.getX() == c.getX() && point.getY() == c.getY()))
		{
			return (false);
		}
		// calcul pour verifier si le point est sur une des droites du triangle
		if (VectorialResult(a, b, point) == 0 || VectorialResult(b, c,
				point) == 0 || VectorialResult(c, a, point) == 0)
		{
			return (false);
		}
		return (true);
	}
	return (false);
}