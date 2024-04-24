/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 09:06:37 by aherrman          #+#    #+#             */
/*   Updated: 2024/04/22 09:54:36 by aherrman         ###   ########.fr       */
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

class ScalarConverter
{
    public:
     virtual ~ScalarConverter();
        ScalarConverter &operator=(ScalarConverter const &rhs);
        static void convert(std::string input);
    private:
    ScalarConverter();
    ScalarConverter(std::string input);
};