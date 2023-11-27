/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.Class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:49:26 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/27 14:46:37 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Fixed.Class.hpp"

class Point
{
  public:
	Point();
	Point(const float posx, const float posy);
	~Point();
	Point(const Point &newp);
	Point &operator=(const Point &other);
	Fixed getX(void) const;
	Fixed getY(void) const;

  private:
	const Fixed _x;
	const Fixed _y;
};

bool bsp(Point const a, Point const b ,Point const c , Point const point);