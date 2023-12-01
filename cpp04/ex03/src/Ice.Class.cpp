/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.Class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:44:15 by aherrman          #+#    #+#             */
/*   Updated: 2023/12/01 10:57:51 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.Class.hpp"

Ice::Ice()
{
    std::cout << GREEN << "Ice Default constructor called" <<RESET<< std::endl;
    return;
}

Ice::Ice(const std::string const type): AMateria(type)
{
    std::cout << GREEN << "Ice type constructor called" <<RESET<< std::endl;
}

Ice::~Ice()
{
    std::cout << RED << "Ice Destructor called" <<RESET<< std::endl;
	return ;
}
Ice::Ice(const Ice &copy)
{
    *this= copy;
}

Ice& ::Ice::operator=(const Ice &copy)
{
    std::cout << " Ice Copy assignment operator called" << std::endl;
    if(this != &copy)
    {
        this->_Type = copy._Type();
    }
    return(*this);
    
}
void Ice::use(ICharacter & c)
{
    std::cout<< "* shoots an ice bolt at "<< c <<" *" std::endl;
    return();
}