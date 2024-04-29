/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:25:43 by aherrman          #+#    #+#             */
/*   Updated: 2024/04/29 11:29:13 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <template.hpp>

template <typename T>

class Array
{
    public:
        Array();
        Array(unsigned int n);
        Array(Array const &src);
        ~Array();
        Array &operator=(Array const &rhs);

    private:
        unsigned int _n;
        T *_array;
};