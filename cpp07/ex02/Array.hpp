/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:25:43 by aherrman          #+#    #+#             */
/*   Updated: 2024/05/15 11:56:07 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>

template <typename T>
class Array
{
public:
    Array();
    Array(unsigned int n);
    Array(Array const &src);
    ~Array();
    Array &operator=(Array const &rhs);
    T &operator[](unsigned int i);
    unsigned int size() const;

public:
    class InvalideNumber : public std::exception
    {
    public:
        virtual const char *what() const throw()
        {
            return ("Invalide number");
        }
    };

private:
    unsigned int _n;
    T *_array;
};

#include "Array.tpp"