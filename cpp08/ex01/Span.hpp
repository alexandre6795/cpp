/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 14:29:44 by aherrman          #+#    #+#             */
/*   Updated: 2024/05/15 11:56:36 by aherrman         ###   ########.fr       */
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

class Span
{
private:
    unsigned int _n;
    std::vector<int> _v;
    Span();

public:
    Span(unsigned int n);
    Span(unsigned int n, bool autofill);
    Span(Span const &other);
    Span &operator=(Span const &other);
    ~Span();
    unsigned int size();
    template <typename T>
    void add(T begin, T end)
    {
        while (begin != end)
            addNumber(*begin++);
    }
    void addNumber(int nb);
    long int shortestSpan();
    long int longestSpan();

    class Less2nb : public std::exception
    {
    public:
        virtual const char *what() const throw()
        {
            return ("Less than 2 numbers in the vector");
        }
    };
};