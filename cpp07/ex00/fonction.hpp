/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 09:39:53 by aherrman          #+#    #+#             */
/*   Updated: 2024/04/29 10:11:08 by aherrman         ###   ########.fr       */
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

template <typename T>

T  min (T a, T b)
{
    return((a >= b) ? b : a);
}

template <typename T>

T max  (T a, T b)
{
    return((a <= b) ? b : a);
}

template <typename T>

void swap (T &a, T &b)
{
    T c = a;
    a = b;
    b = c;
}

