/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 10:13:38 by aherrman          #+#    #+#             */
/*   Updated: 2024/04/29 11:20:41 by aherrman         ###   ########.fr       */
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


#define DEFINE_NUMERIC_TYPE(TYPE)\
    template <> \
    struct is_numeric<TYPE> { \
        static const bool value = true;\
    };

template <typename T>
struct is_numeric {
    static const bool value = false;
};

DEFINE_NUMERIC_TYPE(int)
DEFINE_NUMERIC_TYPE(float)
DEFINE_NUMERIC_TYPE(double)
DEFINE_NUMERIC_TYPE(short)
DEFINE_NUMERIC_TYPE(long)
DEFINE_NUMERIC_TYPE(long long)
DEFINE_NUMERIC_TYPE(unsigned int)
DEFINE_NUMERIC_TYPE(unsigned short)
DEFINE_NUMERIC_TYPE(unsigned long)
DEFINE_NUMERIC_TYPE(unsigned long long)


template <typename T>
void print(T  &x)
{
    std::cout << x << std::endl;
}

template <typename T>
void addifnum(T  &elem)
{
    if(is_numeric<T>::value)
    {
    std::cout << "Adding 2 to "<< elem << std::endl;
        elem += 2;
    }
    else 
        std::cout <<"\"" << elem << "\"" << " Not a numeric type" << std::endl;

}

template <typename T>
void iter(T *address,  int size , void (*func)(T &))
{
    for (int i = 0; i < size; i++)
        func(address[i]);
}