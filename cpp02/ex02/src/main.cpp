/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:31:48 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/27 13:48:03 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.Class.hpp"

int	main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << "OTHER TEST" << std::endl << std::endl;

	Fixed test(5);
	Fixed test2(10);
	std::cout << "test = " << test << " test2 = " << test2 << std ::endl;
	if (test < test2)
		std::cout << " test est plus petit que test2" << std::endl;
	else
		std::cout << " test est plus grand que test2" << std::endl;
	if (test > test2)
		std::cout << " test2 est plus petit que test" << std::endl;
	else
		std::cout << " test2 est plus grand que test" << std::endl;

	if (test >= test2)
		std::cout << " test est plus grand ou egal a test2" << std::endl;
	else
		std::cout << " test 2 est strictement superieur a test" << std::endl;

	if (test <= test2)
		std::cout << " test2 est plus grand ou egal a test" << std::endl;
	else
		std::cout << " test est strictement superieur a test2" << std::endl;

	Fixed test3(test / test2);
	Fixed test4(test3 - test2);
	std::cout << "test / test2 = " << test3 << "= test3" << std::endl;
	std::cout << "test3 - test2 = " << test4 << "= test4" << std::endl;

	std::cout << "min " << Fixed::min(test, test2) << std::endl;
	std::cout << "max " << Fixed::max(test, test2) << std::endl;
	Fixed test5(10);
	Fixed test6(10);
	std::cout << "test5 = " << test5 << " test6 = " << test6 << std ::endl;
	if (test5 < test6)
		std::cout << " test5 est plus petit que test6" << std::endl;
	else
		std::cout << " test5 est plus grand ou egal atest6" << std::endl;

	if (test5 > test6)
		std::cout << " test6 est plus petit que test5" << std::endl;
	else
		std::cout << " test6 est plus grand ou egal a test5" << std::endl;

	if (test5 >= test6)
		std::cout << " test5 est plus grand ou egal a test6" << std::endl;
	else
		std::cout << " test6 est strictement superieur a test5" << std::endl;

	if (test5 <= test6)
		std::cout << " test6 est plus grand ou egal a test5" << std::endl;
	else
		std::cout << " test5 est strictement superieur a test6" << std::endl;
}