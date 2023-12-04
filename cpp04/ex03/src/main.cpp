/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:31:48 by aherrman          #+#    #+#             */
/*   Updated: 2023/12/04 10:36:33 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.Class.hpp"
#include "../include/Character.Class.hpp"
#include "../include/AMateria.Class.hpp"
#include "../include/Ice.Class.hpp"
#include "../include/Cure.Class.hpp"

int main()
{

IMateriaSource* src = new MateriaSource();
std::cout << "          ------          " << std::endl;
src->learnMateria(new Ice());
std::cout << "          ------          " << std::endl;
src->learnMateria(new Cure());
src->learnMateria(new Cure());
src->learnMateria(new Ice());
src->learnMateria(new Cure());
std::cout << "          ------          " << std::endl;

ICharacter* me = new Character("Alex");
AMateria* tmp;
std::cout << "          ------          " << std::endl;
tmp = src->createMateria("ice");
std::cout << "          ------          " << std::endl;
me->equip(tmp);
std::cout << "          ------          " << std::endl;
AMateria* tmp2;
tmp2 = src->createMateria("cure");
me->equip(tmp2);
AMateria* tmp3;
tmp3 = src->createMateria("cure");
me->equip(tmp3);
AMateria* tmp4;
tmp4 = src->createMateria("ice");
me->equip(tmp4);
AMateria* tmp5;
tmp5 = src->createMateria("ice");
me->equip(tmp5);


std::cout << "          ------          " << std::endl;
ICharacter* bob = new Character("bob");
me->use(0, *bob);
me->use(1, *bob);
me->use(2, *bob);
me->use(3, *bob);
me->use(4, *bob);
me->use(8, *bob);
std::cout << "          ------          " << std::endl;
me->unequip(0);
me->unequip(1);
me->unequip(2);
me->unequip(3);
me->unequip(4);
std::cout << "          ------          " << std::endl;
me->use(0, *bob);
me->equip(tmp);
me->use(0, *bob);
me->unequip(0);


std::cout << std::endl;
delete bob;
delete me;
delete src;
delete tmp; // delete l'equipement numero 1 seulement si UNEQUIP
delete tmp4;
delete tmp2;
delete tmp3;
 delete tmp5;
return 0;
}
