/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:31:16 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/20 14:06:18 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.Class.hpp"

int	main(int ac, char **av)
{
	(void)av;
	if (ac > 1)
	{
		std::cout << "les Zombies n'ont pas de cervelles donc il ne faut pas mettre d'arguments" << std::endl;
		return (0);
	}
	Zombie *zombie = new Zombie("Zombie en mem");
	zombie->message();
	delete zombie;
	Zombie Zombiepasmem = Zombie("Zombie pas mem");
	Zombiepasmem.message();
	return(0);
}