/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.Class.hpp                                 :+:      :+:    :+:   */
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

class ClapTrap
{
  public:
	ClapTrap();
	ClapTrap(const std::string name);
	ClapTrap(const ClapTrap &copy);
	~ClapTrap();
	ClapTrap &operator=(const ClapTrap &copy);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
    void Status();

	void setName(std::string name);
    std::string getName(void);
    void setHit(unsigned int amount);
    unsigned int getHit(void);
        void setEnergy(unsigned int amount);
    unsigned int getEnergy(void);
        void setAttack(unsigned int amount);
    unsigned int getAttack(void);

  private:
	std::string _Name;
	unsigned int _Hit;
	unsigned int _Energy;
	unsigned int _Attack;
};