/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.Class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 09:05:13 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/28 09:59:20 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

class Animal
{
  public:
	Animal();
	Animal(const std::string name);
	Animal(const Animal &copy);
	virtual ~Animal();
	Animal &operator=(const Animal &copy);

	virtual   void makeSound()const;
	virtual std::string getType() const;

  protected:
	std::string _Type;
};