/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:31:48 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/28 15:13:50 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.Class.hpp"

int	main(void)
{
	FragTrap Hodor;
	const std::string tmp = "Etalon du cul";
	Hodor.setName("Jack");
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
	FragTrap Hodor2("Hodor");

	Hodor2.attack(tmp);
	Hodor2.guardGate();
	std::cout << tmp << " attack" << std::endl;
	Hodor2.takeDamage(8);
	Hodor2.beRepaired(2);
	Hodor2.takeDamage(1);
	for (int i = 0; i < 10; i++)
		Hodor2.beRepaired(1);
	std::cout << tmp << " attack" << std::endl;
	Hodor2.beRepaired(10);
	Hodor2.takeDamage(8);
	Hodor2.attack(tmp);
	Hodor2.beRepaired(1);

	return (0);
}