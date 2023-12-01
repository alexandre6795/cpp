/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Curse.Class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:44:15 by aherrman          #+#    #+#             */
/*   Updated: 2023/12/01 10:57:01 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Curse.Class.hpp"

Curse::Curse()
{
    std::cout << GREEN << "Curse Default constructor called" <<RESET<< std::endl;
    return;
}

Curse::Curse(const std::string const type): AMateria(type)
{
    std::cout << GREEN << "Curse type constructor called" <<RESET<< std::endl;
}

Curse::~Curse()
{
    std::cout << RED << "Curse Destructor called" <<RESET<< std::endl;
	return ;
}
Curse::Curse(const Curse &copy)
{
    *this= copy;
}

Curse& ::Curse::operator=(const Curse &copy)
{
    std::cout << " Curse Copy assignment operator called" << std::endl;
    if(this != &copy)
    {
        this->_Type = copy._Type();
    }
    return(*this);
    
}
void Curse::use(ICharacter & c)
{
    std::cout<< "* heals "<< c <<" 's wounds*" std::endl;
    return();
}