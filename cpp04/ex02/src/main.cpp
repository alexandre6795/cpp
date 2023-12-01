/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:31:48 by aherrman          #+#    #+#             */
/*   Updated: 2023/12/01 09:31:12 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.Class.hpp"
#include "../include/Dog.Class.hpp"
#include "../include/WrongCat.Class.hpp"

int	main(void)
{
	const Animal	*j;
	const Animal	*i;
	Animal			*Anim[10];
	int				a;


	a = 0;
	j = new Dog();
	i = new Cat();

	for (a = 0; a < 10; a++)
	{
		if (a % 2 == 0)
			Anim[a] = new Cat;
		else
			Anim[a] = new Dog;
		Anim[a]->makeSound();	
	}
	for (a = 0; a < 10; a++)
		delete Anim[a];
	delete			i;
	delete j; // should not create a leak
		
	return (0);
}
