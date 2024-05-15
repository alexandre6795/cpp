/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 14:32:14 by aherrman          #+#    #+#             */
/*   Updated: 2024/05/14 11:57:14 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
}

Span::Span(unsigned int n) : _n(n)

{
}

Span::Span(unsigned int n,bool autofill) : _n(n)
{
    if(autofill)
    {
        srand(time(NULL));
        for(unsigned int i = 0; i < n; i++)
        {
            _v.push_back(rand());
        }
    }
}

Span::Span(Span const &other)
{ 
    *this = other;
}

Span::~Span()
{
}

Span &Span::operator=(Span const &other)
{
    if (this != &other)
    {
        _n = other._n;
        _v = other._v;
    }
    return *this;
}

unsigned int Span::size()
{
    return _v.size();
}

void Span::addNumber(int nb)
{
    if (_v.size() < _n)
        _v.push_back(nb);
}

long int Span::shortestSpan()
{
    long int delta = 0;
    long int n1 = 0;
    long int n2 = 0;
    long int result;
        if (_v.size() < 2)
            throw Less2nb();
    for(int i = 0; i < static_cast<int>(_v.size()); i++)
    {
        for(int j = i + 1; j <static_cast<int>(_v.size()); j++)
        {
            if(_v[i] > _v[j])
            {
                n1 = _v[i];
                n2 = _v[j];
            }
            else
            {
                n1 = _v[j];
                n2 = _v[i];
            }
            delta = n1 - n2;
            if(delta < result)
            {
                result = delta;
            }
        }
    }
    std::cout << "found " << n1 << " and " << n2 << " result for ShortestSpan: ";
    return (result);
    
}

long int Span::longestSpan()
{
   long int shortest = __LONG_MAX__;
    long int longest = 0;
    if (_v.size() < 2)
            throw Less2nb();
    for( std::vector<int>::size_type i = 0 ; i < _v.size(); i++)
    {
        if(_v[i] < shortest)
        {
            shortest = _v[i];
        }
        else if(_v[i] > longest)
        {
            longest = _v[i];
        }
    }
    std::cout << "found " << longest <<" and " << shortest << " result for longestSpan: ";
    return (longest - shortest);
    
}
