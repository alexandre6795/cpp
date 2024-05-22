/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 09:02:10 by aherrman          #+#    #+#             */
/*   Updated: 2024/05/15 11:55:37 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base *generate(void)
{
    srand(time(NULL));
    int i = rand() % 3;
    if (i == 0)
        return new A;
    else if (i == 1)
        return new B;
    return new C;
}
void indentify_ptr(Base *ptr)
{
    std::cout << "indentify by Pointer " << std::endl;
    if (dynamic_cast<A *>(ptr))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(ptr))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(ptr))
        std::cout << "C" << std::endl;
}
void identify_ref(Base &ref)
{
    A a;
    B b;
    C c;
    std::cout << "indentify by Reference " << std::endl;
    try
    {
        a = dynamic_cast<A &>(ref);
        std::cout << "A" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        b = dynamic_cast<B &>(ref);
        std::cout << "B" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        c = dynamic_cast<C &>(ref);
        std::cout << "C" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}
