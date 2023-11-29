/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:31:48 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/29 11:36:35 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.Class.hpp"

int	main(void)
{
	std::cout << std::endl << "ClapTrap test" << std::endl;
	ClapTrap Bob;
	std::string tmp = "Etalon du cul";
	Bob.setName("Jack");
	Bob.attack(tmp);
	std::cout << tmp << " attack" << std::endl;
	Bob.takeDamage(8);
	Bob.beRepaired(5);
	Bob.takeDamage(1);
	for (int i = 0; i < 2; i++)
		Bob.attack(tmp);
	Bob.beRepaired(10);
	std::cout << tmp << " attack" << std::endl;
	Bob.takeDamage(8);
	Bob.attack(tmp);
	Bob.beRepaired(1);
	std::cout << std::endl << std::endl;
	ClapTrap Bob2("You");

	Bob2.attack(tmp);
	std::cout << tmp << " attack" << std::endl;
	Bob2.takeDamage(8);
	Bob2.beRepaired(2);
	Bob2.takeDamage(1);
	for (int i = 0; i < 2; i++)
		Bob2.beRepaired(1);
	std::cout << tmp << " attack" << std::endl;
	Bob2.beRepaired(10);
	Bob2.takeDamage(8);
	Bob2.attack(tmp);
	Bob2.beRepaired(1);

	std::cout << std::endl << "ScavTrap test" << std::endl;
	ScavTrap Hodor;
	tmp = "killa";
	Hodor.setName("PMC");
	Hodor.attack(tmp);
	std::cout << tmp << " attack" << std::endl;
	Hodor.takeDamage(8);
	Hodor.beRepaired(5);
	Hodor.takeDamage(1);
	for (int i = 0; i < 10; i++)
		Hodor.attack(tmp);
	std::cout << tmp << " attack" << std::endl;
	Hodor.beRepaired(10);
	Hodor.takeDamage(8);
	Hodor.attack(tmp);
	Hodor.beRepaired(1);
	std::cout << std::endl << std::endl;
	ScavTrap Hodor2("hodor");
	Hodor2.guardGate();
	Hodor2.attack(tmp);
	Hodor2.guardGate();
	std::cout << tmp << " attack" << std::endl;
	Hodor2.takeDamage(8);
	Hodor2.beRepaired(2);
	Hodor2.takeDamage(1);
	for (int i = 0; i < 2; i++)
		Hodor2.beRepaired(1);
	Hodor2.beRepaired(10);
	std::cout << tmp << " attack" << std::endl;
	Hodor2.takeDamage(8);
	Hodor2.attack(tmp);
	Hodor2.beRepaired(1);

	std::cout << std::endl << "FragTrap test" << std::endl;
	FragTrap Frag;
	tmp = "un gentil papillon";
	Frag.setName("Quentin");
	Frag.attack(tmp);
	std::cout << tmp << " attack" << std::endl;
	Frag.takeDamage(8);
	Frag.beRepaired(5);
	Frag.takeDamage(1);
	for (int i = 0; i < 2; i++)
		Frag.attack(tmp);
	std::cout << tmp << " attack" << std::endl;
	Frag.beRepaired(10);
	Frag.takeDamage(8);
	Frag.attack(tmp);
	Frag.beRepaired(1);
	std::cout << std::endl << std::endl;
	FragTrap Frag2("Axel");

	Frag2.attack(tmp);
	Frag2.hightFivesGuys();
	std::cout << tmp << " attack" << std::endl;
	Frag2.takeDamage(8);
	Frag2.beRepaired(2);
	Frag2.takeDamage(1);
	for (int i = 0; i < 2; i++)
		Frag2.beRepaired(1);
	std::cout << tmp << " attack" << std::endl;
	Frag2.beRepaired(10);
	Frag2.takeDamage(8);
	Frag2.attack(tmp);
	Frag2.beRepaired(1);

	std::cout << std::endl << "DiamondTrap test" << std::endl;
	DiamondTrap Diamond;
	tmp = "un petit poid";
	Diamond.hightFivesGuys();
	Diamond.guardGate();
	Diamond.whoAmI();
	
	Diamond.attack(tmp);
	std::cout << tmp << " attack" << std::endl;
	Diamond.takeDamage(8);
	Diamond.beRepaired(5);
	Diamond.takeDamage(1);
	for (int i = 0; i < 2; i++)
		Diamond.attack(tmp);
	std::cout << tmp << " attack" << std::endl;
	Diamond.beRepaired(10);
	Diamond.takeDamage(8);
	Diamond.attack(tmp);
	Diamond.beRepaired(1);
	std::cout << std::endl << std::endl;
	DiamondTrap Diamond2("Bonduelle");

	Diamond2.hightFivesGuys();
	Diamond2.guardGate();
	Diamond2.whoAmI();
	Diamond2.attack(tmp);
	std::cout << tmp << " attack" << std::endl;
	Diamond2.takeDamage(8);
	Diamond2.beRepaired(2);
	Diamond2.takeDamage(1);
	for (int i = 0; i < 2; i++)
		Diamond2.beRepaired(1);
	std::cout << tmp << " attack" << std::endl;
	Diamond2.beRepaired(10);
	Diamond2.takeDamage(8);
	Diamond2.attack(tmp);
	Diamond2.beRepaired(1);

	return (0);
}