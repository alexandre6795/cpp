/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:31:16 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/20 12:20:47 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.Class.hpp"

	// void randomChump(std::string name);
	//  Zombie *newZombie(std::string name);

int	main(int ac, char **av)
{
	(void)av;
	if (ac > 1)
	{
		std::cout << "les Zombies n'ont pas de cervelles donc il ne faut pas mettre d'arguments" << std::endl;
		return (0);
	}

	Zombie abc("Zombie sans 123");
	Zombie *Zombiemem = abc.newZombie("Zombie qui a de la memoire");
	// Zombiemem->newZombie("Zombie qui a de la memoire");
	Zombiemem->message();
	delete Zombiemem;
	abc.randomChump("Zombie sans mem");
	return (0);
}