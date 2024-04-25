/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 09:28:58 by aherrman          #+#    #+#             */
/*   Updated: 2024/04/25 11:35:24 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
}

Serializer::Serializer(Data *ptr)
{
    this->_private = ptr;
    
}

Serializer::Serializer(Serializer const &src)
{
    *this = src;
}

Serializer::~Serializer()
{
    delete this->_private;
}

Serializer &Serializer::operator=(Serializer const &src)
{
    if (this != &src)
    {
    }
    return (*this);
}

uintptr_t Serializer::serialize(Data *ptr)
{
    uintptr_t raw = reinterpret_cast<uintptr_t>(ptr);
    return (raw);
}

Data *Serializer::deserialize(uintptr_t raw)
{
    Data *ptr = reinterpret_cast<Data *>(raw);
    return (ptr);
}



