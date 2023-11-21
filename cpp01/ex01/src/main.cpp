/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:31:16 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/21 11:28:54 by aherrman         ###   ########.fr       */
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
		std::cout << "Les Zombies n'ont pas de cervelles donc il ne faut pas mettre d'arguments" << std::endl;
		return (0);
	}
	std::string line;
	std::cout << "Nombres de Zombie(entre 1 et 100): ";
	if (!std::getline(std::cin, line))
		return (1);
	int i = std::atoi(line.c_str());
	if ((i <= 0 || i > 100))
	{
		std::cout << "Tu as ecrit " << i << " donc c'est pas entre 1 et 100" << std::endl;
		std::srand(static_cast<unsigned int>(std::time(0)));
		i = std::rand() % 101;
		std::cout << "Le nombre de zombies est de " << i << std::endl;
	}
	std::cout << "Nom des Zombies :";
	if (!std::getline(std::cin, line))
	{
		std::cerr << "Erreur de lecture de l'entrée" << std::endl;
		return (1);
	}
	if (line.empty())
	{
		std::cout << "Bien jouer de ne pas reussir a taper un caractere donc je choisi le nom Nathan" << std::endl;
		line = "Nathan";
	}
	Zombie *z = NULL;
	z = z->zombieHorde(i, line);
	for (int j = 0; j < i; j++)
	{
		z[j].message();
	}
	delete[] z;

	return (0);
}