/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:31:16 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/20 16:29:16 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.Class.hpp"

int	valid_digit(std::string str)
{
	size_t	i;

	i = 0;
	while (i < str.length())
	{
		if (!std::isdigit(str[i]))
			return (1);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	(void)av;
	if (ac > 1)
	{
		std::cout << "les Zombies n'ont pas de cervelles donc il ne faut pas mettre d'arguments" << std::endl;
		return (0);
	}
	std::string line;
	std::cout << "nombres de Zombie(entre 1 et 100): ";
	if (!std::getline(std::cin, line))
		return (1);
	int i = std::atoi(line.c_str());
	std::cout << "i =" << i << std::endl;
	if ((i <= 0 || i > 100))
	{
		std::cout << "tu as ecrit " << i << "donc et c'est pas entre 0 et 100" << std::endl;
		std::srand(static_cast<unsigned int>(std::time(0)));
		i = std::rand() % 101;
		std::cout << " le nombre de zombies est de " << i << std::endl;
	}
	std::cout << " nom des Zombies :" << std::endl;
	if (!std::getline(std::cin, line))
	{
		std::cerr << "Erreur de lecture de l'entrée" << std::endl;
		return (1);
	}
	if (line.empty())
	{
		std::cout << "bien jouer de pas reussir a taper un caractere donc je choisi le nom Nathan" << std::endl;
		line = "Nathan";
	}
	Zombie z;
	Zombie *horde = z.zombieHorde(i, line);
	for (int j = 0; j < i; j++)
	{
		horde[j].message();
	}
	delete[] horde;

	return (0);
}