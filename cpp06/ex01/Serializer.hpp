/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 09:28:52 by aherrman          #+#    #+#             */
/*   Updated: 2024/05/21 14:42:58 by aherrman         ###   ########.fr       */
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

struct Data
{
    std::string name;
    int nbexam;
};

Data *generate(std::string name, int nbexam);
Data *copyData(Data *ptr);

class Serializer
{
public:
    ~Serializer();
    Data *_private;
    Serializer &operator=(Serializer const &src);
    static uintptr_t serialize(Data *ptr);
    static Data *deserialize(uintptr_t raw);

private:
    Serializer();
    Serializer(Serializer const &src);
    Serializer(Data *ptr);
};