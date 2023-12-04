/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.Class.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 08:41:24 by aherrman          #+#    #+#             */
/*   Updated: 2023/12/04 09:49:53 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.Class.hpp"


MateriaSource::MateriaSource()
{
	std::cout <<  GREEN <<"MateriaSource default constructor called  " <<RESET<< std::endl;
    for (int i = 0 ; i < 3; i++)
    {
        this->memory[i] = NULL;
    }

}


MateriaSource::MateriaSource(const MateriaSource&	newMateriaSource)
{ 
	std::cout <<  GREEN <<"MateriaSource Copy constructor called " <<RESET<< std::endl;
    for (int i = 0 ; i < 3; i++)
    {
        this->memory[i] = NULL;
    }
	*this = newMateriaSource;
    
}


MateriaSource& MateriaSource::operator=(MateriaSource const & objectToCopy)
{
	std::cout << "MateriaSource Copy assignment operator called " << std::endl;
	if (this != &objectToCopy)
	{
		for (int i = 0 ; i < 3; i++)
        {
            this->memory[i] = NULL;
        }
	}
	return (*this);
}


MateriaSource::~MateriaSource()
{
	std::cout << RED<<"Hey you i'm MateriaSource destructor" <<RESET<< std::endl;
    for (int i = 0; i < 3; ++i)
    {
        if (memory[i])
            delete memory[i];
    }
}



void MateriaSource::learnMateria(AMateria* bookOfMagic)
{
    for (int i = 0; i < 3; i++)
    {
        if (this->memory[i] == NULL && i < 3)
        {
            this->memory[i] = bookOfMagic;
            std::cout << "You learn a new magic spell : " << bookOfMagic->getType()  << std::endl;
            return ;
        }
        if (i == 3)
        {
            delete bookOfMagic;
            std::cout << "your brain is full, you can't learn more" << std::endl;
            return ;
        }
    }
}



AMateria* MateriaSource::createMateria(std::string const & type)
{
     for (int i = 0; i < 3; i++)
    {
        if (memory[i] && memory[i]->getType() == type)
        {
            std::cout << "You create a new item : " << type << std::endl;
            return (memory[i]->clone());
        }
    
    }
    return 0;
}