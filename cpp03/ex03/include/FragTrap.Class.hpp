/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.Class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:19:28 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/28 15:13:40 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.Class.hpp"

#pragma once

class FragTrap : public ClapTrap
{
  public:
	FragTrap();
	FragTrap(const std::string name);
	FragTrap(const FragTrap &copy);
	~FragTrap();
	FragTrap &operator=(const FragTrap &copy);

	void guardGate();
	void beRepaired(unsigned int amount);
	void attack(const std::string &target);
};