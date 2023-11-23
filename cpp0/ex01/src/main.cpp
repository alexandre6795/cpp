/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:31:16 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/23 09:26:58 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.Class.hpp"
#include "../include/Phonebook.Class.hpp"

int	main(int ac, char **av)
{
	(void)av;
	if (ac > 1)
		return (0);
	Phonebook book;
	std::string line;

	std::cout << "Phonebook v0.0" << std::endl;
	while (1)
	{
		std::cout << "entrez une commande ";
		if (!std::getline(std::cin, line))
		{
			std::cout << std::endl;
			break ;
		}
		if ((line == "ADD"))
			book.add();
		else if ((line == "SEARCH"))

			book.search();
		else if ((line == "EXIT"))
			break ;
		else
		{
			std::cout << "cette commande est un erreur" << std::endl;
			std::cout << " commande valide \"ADD\" \"SEARCH\" ou \"EXIT\" " << std::endl;
		}
	}
	return (0);
}