/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.Class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 09:05:13 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/28 09:59:20 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.Class.hpp"
#include "Brain.Class.hpp"

#pragma once
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define GRAS "\033[1m"

class Dog : virtual public Animal
{
  public:
	Dog();
	Dog(const std::string name);
	Dog(const Dog &copy);
	virtual ~Dog();
	Dog &operator=(const Dog &copy);
	void makeSound() const;
		private:
	Brain *_Brain;
};