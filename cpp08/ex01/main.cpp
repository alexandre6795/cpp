/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 14:52:15 by aherrman          #+#    #+#             */
/*   Updated: 2024/05/14 11:47:30 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


int main()
{

std::list <int> lst;
std::vector <int> vec;

for (int i = 0; i < 10; i++)
{
    lst.push_back(i);
    vec.push_back(-i);
}
try
{
std::cout << "Subject test" << std::endl;

Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
}
catch(const std::exception& e)
{
    std::cerr << e.what() << '\n';
}

try
{
    
std::cout << "My tests" << std::endl;
std::cout << "Test with 10000 size" << std::endl;

Span sp2 = Span(10000, true);
std::cout << sp2.size() << std::endl;
std::cout << sp2.shortestSpan() << std::endl;
std::cout << sp2.longestSpan() << std::endl;

std::cout << "test list et vector" << std::endl;

Span sp4 = Span(10);
sp4.add(lst.begin(), lst.end());
std::cout << sp4.size() << std::endl;
std::cout << sp4.shortestSpan() << std::endl;
std::cout << sp4.longestSpan() << std::endl;

Span sp5 = Span(10);
sp5.add(vec.begin(), vec.end());
std::cout << sp5.size() << std::endl;
std::cout << sp5.shortestSpan() << std::endl;
std::cout << sp5.longestSpan() << std::endl;

std::cout << "Test with 0 size" << std::endl;

Span sp3 = Span(0);
std::cout << sp3.size() << std::endl;
std::cout << sp3.shortestSpan() << std::endl;
std::cout << sp3.longestSpan() << std::endl;
}
catch(const std::exception& e)
{
    std::cerr << e.what() << '\n';
}




return 0;
}