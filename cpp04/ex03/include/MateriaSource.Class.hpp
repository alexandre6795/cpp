/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.Class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 08:26:18 by aherrman          #+#    #+#             */
/*   Updated: 2023/12/04 08:27:09 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "IMateriaSource.Class.hpp"

class MateriaSource : public IMateriaSource

{


    public:
    
    //Orthodox Canonical Form
    MateriaSource(); //default constructor
    MateriaSource(const MateriaSource&	newMateriaSource); //cpy constructor
    MateriaSource& operator=(MateriaSource const & objectToCopy); //Copy assignment operator
    ~MateriaSource();//destructor


    //Functions
    void learnMateria(AMateria* bookOfMagic);
    AMateria* createMateria(std::string const & type);
        private:

    AMateria* memory[3];
};