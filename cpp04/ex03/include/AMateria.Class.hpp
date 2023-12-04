/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.Class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 09:05:13 by aherrman          #+#    #+#             */
/*   Updated: 2023/12/04 09:22:38 by aherrman         ###   ########.fr       */
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

#include"ICharacter.Class.hpp"

class AMateria
{
  public:
	
	AMateria( std::string const &type);
	//canonical form
	AMateria();
	AMateria(const AMateria &copy);
	virtual ~AMateria() =0;
	AMateria &operator=(const AMateria &copy);
	
	
	virtual AMateria * clone() const = 0;
	virtual void use(ICharacter&target);
	std::string const getType()const ;
	
	

  protected:
	std::string _Type;
};