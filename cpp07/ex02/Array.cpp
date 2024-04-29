/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:56:42 by aherrman          #+#    #+#             */
/*   Updated: 2024/04/29 11:59:36 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>

Array::Array() : _n(0), _array(NULL) {}

Array::Array(unsigned int n) : _n(n), _array(new T[n]) {}

Array::Array(Array const &src) {
    *this = src;
}

Array::~Array() {
    delete[] _array;
}

