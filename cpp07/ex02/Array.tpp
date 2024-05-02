/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:56:42 by aherrman          #+#    #+#             */
/*   Updated: 2024/05/02 13:30:27 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


template <typename T>
Array<T>::Array():_n(0), _array(new T[0]) {}

template <typename T>
Array<T>::Array(unsigned int n): _n(n), _array(new T[n])
{
    
}
template <typename T>
Array<T>::Array(Array const &src)
{
    if(this != &src)
    {
        _n = src._n;
        _array = new T[_n];
        for(unsigned int i = 0; i < _n; i++)
            _array[i] = src._array[i];
    }
    
}
template <typename T>
Array<T>::~Array()
{
    delete [] _array;
}
template <typename T>
Array<T> &Array<T>::operator=(Array const &rhs)
{
    if(this != rhs)
    {
         delete[] _array;
        _n = rhs._n;
        _array = new T [_n];
        for(unsigned int i = 0; i < _n; i++)
            _array[i] = rhs._array[i];
    }
    
}
template <typename T>
T &Array<T>::operator[](unsigned int i)
{
    try{
        if(i < 0 || i >= _n)
            throw InvalideNumber();
        return(_array[i]);
    }
    catch (InvalideNumber &e)
    {
        std::cout << e.what() << std::endl;
    
    }
    return(_array[0]);
}
template <typename T>
unsigned int Array<T>::size() const
{
    return(_n);
    
}

