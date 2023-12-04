/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.Class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:44:15 by aherrman          #+#    #+#             */
/*   Updated: 2023/12/04 09:49:07 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.Class.hpp"

Ice::Ice()
{
    this->_Type="ice";
    std::cout << GREEN << "Ice Default constructor called" <<RESET<< std::endl;
    return;
}

Ice::Ice( std::string const &type): AMateria(type)
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
        this->_Type = copy._Type;
    }
    return(*this);
    
}
void Ice::use(ICharacter & target)
{
    std::cout<< "* shoots an ice bolt at "<< target.getName() <<" *"<< std::endl;

}
AMateria *Ice::clone() const
{
	return (new Ice(*this));
}