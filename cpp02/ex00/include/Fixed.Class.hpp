/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.Class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:57:41 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/23 13:34:58 by aherrman         ###   ########.fr       */
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

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define GRAS    "\033[1m"

class Fixed
{
    public:
    Fixed();
    Fixed(const Fixed & copy);
    ~Fixed();
    Fixed& operator=(const Fixed & copy);
    int getRawBits(void)const;
    void setRawBits(int const raw);

    private:
    int _val;
    static const int _fractionnaire = 8;
};