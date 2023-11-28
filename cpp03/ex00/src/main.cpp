/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:31:48 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/28 11:29:54 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.Class.hpp"

int	main(void)
{
	ClapTrap Bob;
	const std::string tmp = "Etalon du cul";
	Bob.setName("Jack");
	Bob.attack(tmp);
	std::cout << tmp << " attack" << std::endl;
	Bob.takeDamage(8);
	Bob.beRepaired(5);
	Bob.takeDamage(1);
	for (int i = 0; i < 10; i++)
		Bob.attack(tmp);
	std::cout << tmp << " attack" << std::endl;
	Bob.beRepaired(10);
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

	return (0);
}