/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 09:40:40 by aherrman          #+#    #+#             */
/*   Updated: 2024/05/07 10:49:41 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "easyfind.hpp"

#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>
#include <stdint.h>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <map>
#include <exception>
#include "easyfind.hpp"


bool	isonlydigit(std::string str)
{
	size_t	i;

	i = 1;
	while (i < str.length())
	{
		if (!std::isdigit(str[i]))
			return (1);
		i++;
	}
	return (0);
}

int main()
{
    std::vector<int> v;
    std::string line;

    srand(time(NULL));

    for (int i = 0; i < 4242; i++)
    {
        if(i % 3 == 0)
        v.push_back(rand() % 10 + i);
        else if (i % 2 == 0)
        v.push_back(rand() * 10 % i);
        else
        v.push_back(rand() /2588 );
    }
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    std::cout << "EXIT to exit the program TEST for autotest or int" << std::endl;
    while(1)
    {
        std::cout << std::endl << "Enter a number to find in the vector: ";
        std::getline(std::cin, line);
        if (line == "EXIT")
            break;
        else if (line == "TEST")
        {
            std::vector<int> t;
            t.push_back(42);
            t.push_back(1);
            t.push_back(2);
            t.push_back(-1);
            t.push_back(-2);
            t.push_back(0);
            std::list<int> l;
            l.push_back(1);
            l.push_back(2);
            l.push_back(-1);
            l.push_back(-2);
            l.push_back(0);
            l.push_front(42);
            std::deque<int> d;
            d.push_back(1);
            d.push_back(2);
            d.push_back(-1);
            d.push_back(-2);
            d.push_back(0);
            d.push_front(42);
            easyfind(t, 42);
            easyfind(t, -1);
            easyfind(t, 84);
            easyfind(l, 42);
            easyfind(l, -1);
            easyfind(l, 84);
            easyfind(d, 42);
            easyfind(d, -1);
            easyfind(d, 84);
            std::cout <<"end of autotest" << std::endl;
            break;
        }
        if(line.empty() ||
        (!std::isdigit(line[0]) && ( line[0]!='+' && line[0]!= '-')) || isonlydigit(line))
        {
            std::cout  <<"\"" << line <<"\"" << " are not a int" <<  std::endl;
            continue;
        }
        else
        {
           long int va = std::atol(line.c_str());
           if(va > std::numeric_limits<int>::max() || va < std::numeric_limits<int>::min())
              {
                std::cout << "Number out of range" << std::endl;
                continue;
              }
            else
            easyfind(v, va);
            
        }
    }
    
}
