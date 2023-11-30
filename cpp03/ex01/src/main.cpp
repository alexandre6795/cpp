/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:31:48 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/29 14:12:09 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.Class.hpp"

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
		for (int i = 0; i < 10; i++)
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
	for (int i = 0; i < 10; i++)
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
	for (int i = 0; i < 2; i++)
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

	return (0);
}