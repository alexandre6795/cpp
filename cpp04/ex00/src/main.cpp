/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:31:48 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/30 16:25:39 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.Class.hpp"
#include "../include/Dog.Class.hpp"
#include "../include/WrongCat.Class.hpp"

int	main(void)
{
	const Animal		*meta;
	const Animal		*j;
	const Animal		*i;
	const WrongAnimal	*a;
	const WrongAnimal	*b;


	meta = new Animal();
	j = new Dog();
	i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << "Wrong cest pas bien" << std::endl;
	a = new WrongAnimal();
	b = new WrongCat();
	std::cout << b->getType() << "" << std::endl;
	b->makeSound();
	a->makeSound();

	delete				a;
	delete				b;
	delete				j;
	delete				i;
	delete				meta;
	return (0);
}
