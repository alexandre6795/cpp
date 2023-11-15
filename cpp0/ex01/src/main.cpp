/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:31:16 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/15 11:50:17 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.Class.hpp"
#include "../include/Phonebook.Class.hpp"

int	main(int ac, char **av)
{
	if (ac > 1)
		return ;
	Phonebook book;
	std::string line;

	while (1)
	{
		std::getline(std::cin, line);
		if (line == "ADD")
			book.ADD;
		else if (line == "SEARCH")
			book.SEARCH;
		else if (line == "EXIT")
			break ;
		else
			std::cout << "cette commande est un erreur (comme toi)" << std::endl;
	}
	return (0);
}