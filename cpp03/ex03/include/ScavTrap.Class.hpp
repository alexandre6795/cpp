/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.Class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:19:28 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/28 14:54:52 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.Class.hpp"

#pragma once

class ScavTrap : public ClapTrap
{
  public:
	ScavTrap();
	ScavTrap(const std::string name);
	ScavTrap(const ScavTrap &copy);
	~ScavTrap();
	ScavTrap &operator=(const ScavTrap &copy);

	void guardGate();
	void beRepaired(unsigned int amount);
	void attack(const std::string &target);
};