/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 09:40:30 by aherrman          #+#    #+#             */
/*   Updated: 2024/05/15 11:56:19 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

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

template <typename T>
class Numbernotfound : public std::exception
{
public:
    virtual const char *what() const throw()
    {
        return ("Number not fund");
    }
};

template <typename T>
int easyfind(T &container, int value)
{
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    int distance = -1;
    try
    {
        if (it == container.end())
        {
            std::cout << value << " ";
            throw Numbernotfound<T>();
        }
        else
        {
            distance = std::distance(container.begin(), it);
            std::cout << "Value: " << value << " found at pos number " << distance << std::endl;
        }
    }
    catch (Numbernotfound<T> &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (distance);
}