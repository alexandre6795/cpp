/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:23:57 by aherrman          #+#    #+#             */
/*   Updated: 2024/05/24 10:32:50 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    Array<int> b;
    Array<int> a(5);
    Array<unsigned int> d(5);

    std::cout << "a size = " << a.size() << std::endl;
    std::cout << "b size = " << b.size() << std::endl;
    std::cout << "d size = " << d.size() << std::endl;

    a[0] = 42;
    a[1] = 21;
    a[2] = 84;

    Array<int> e(a);
    std::cout << "print inside array" << std::endl;
    std::cout << a[0] << std::endl;
    std::cout << a[1] << std::endl;
    std::cout << a[2] << std::endl;
    try
    {

        a[75] = -5;
        std::cout << a[75] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "print inside a copy" << std::endl;
    std::cout << "a= " << a[0] << "copy = " << e[0] << std::endl;
    std::cout << "a= " << a[1] << "copy = " << e[1] << std::endl;
    std::cout << "a= " << a[2] << "copy = " << e[2] << std::endl;
    try
    {
        std::cout << "a= " << a[75] << "copy = " << e[75] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    d[4] = 42;
    return (0);
}
