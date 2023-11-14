/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 09:43:22 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/14 10:05:44 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	ft_upper_and_print_av(int ac, char **av)
{
	for (int i = 1; i < ac; i++)
		for (int j = 0; av[i][j]; j++)
		{
			av[i][j] = toupper(av[i][j]);
			std::cout << av[i][j];
		}
	std::cout << std::endl;
}

int	main(int ac, char **av)
{
	if (ac > 1)
		ft_upper_and_print_av(ac, av);
	else
		std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE" << std::endl;
}