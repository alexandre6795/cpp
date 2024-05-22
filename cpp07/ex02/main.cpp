/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:23:57 by aherrman          #+#    #+#             */
/*   Updated: 2024/05/15 11:56:13 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    Array<int> b;
    Array<int> a(5);
    Array<unsigned int> d(5);
    Array<std::string> c(5);

    std::cout << "a size = " << a.size() << std::endl;
    std::cout << "b size = " << b.size() << std::endl;
    std::cout << "c size = " << c.size() << std::endl;
    std::cout << "d size = " << d.size() << std::endl;

    a[0] = 42;
    a[1] = 21;
    a[2] = 84;
    a[75] = -5;

    std::cout << a[0] << std::endl;
    std::cout << a[1] << std::endl;
    std::cout << a[2] << std::endl;
    std::cout << a[75] << std::endl;

    c[0] = "Hello";
    c[1] = "World";
    d[4] = 42;
    d[3] = -5;

    std::cout << c[0] << std::endl;
    std::cout << c[1] << d[4] << std::endl;
    std::cout << d[3] << std::endl;

    return (0);
}
