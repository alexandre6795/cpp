/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 09:38:47 by aherrman          #+#    #+#             */
/*   Updated: 2024/05/15 11:55:17 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Data *generate(std::string name, int nb)
{
    Data *ptr = new Data;
    ptr->name = name;
    ptr->nbexam = nb;
    return (ptr);
}

Data *copyData(Data *ptr)
{
    Data *copy = new Data;
    copy->name = ptr->name;
    return (copy);
}