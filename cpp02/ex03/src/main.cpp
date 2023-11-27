/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:31:48 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/27 15:08:28 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.Class.hpp"

bool	bsp(const Point a, const Point b, const Point c, const Point point);

int	main(void)
{
	const Point a(10, 0);
	const Point b(0, 10);
	const Point c(0, 0);
	const Point point(-40, -10);
	const Point point2(1, 6);
	// const Point a(0, 6);
	// const Point b(0, 2);
	// const Point c(2, 4);
	// const Point point(0, 3);
	// const Point point2(1, 6);

	std::cout << "Coordonate of Point A x= " << a.getX() << " and y= " << a.getY() << std::endl;
	std::cout << "Coordonate of Point B x= " << b.getX() << " and y= " << b.getY() << std::endl;
	std::cout << "Coordonate of Point C x= " << c.getX() << " and y= " << c.getY() << std::endl;
	std::cout << std::endl;
	std::cout << "Coordonate of Point x= " << point.getX() << " and y= " << point.getY() << std::endl;

	if (bsp(a, b, c, point) == true)
		std::cout << "This is good,point is inside the triangle because the result is TRUE" << std::endl;
	else
		std::cout << "No,point is not inside the triangle because the result is FALSE or The coordinate of the searched point is the same as that of one of the vertices of the triangle" << std::endl;
	std::cout << std::endl;
	std::cout << "Concerning Point2:" << std::endl;
	std::cout << "Coordonate of Point2 x= " << point2.getX() << " and y= " << point2.getY() << std::endl;
	if (bsp(a, b, c, point2) == true)
		std::cout << " This is good point2 is inside the triangle because the result is TRUE" << std::endl;
	else
		std::cout << " No,point2 is not inside the triangle because the result is FALSE or The coordinate of the searched point is the same as that of one of the vertices of the triangle " << std::endl;
	return (0);
}