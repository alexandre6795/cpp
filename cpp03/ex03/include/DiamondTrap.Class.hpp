/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.Class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:16:36 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/29 10:18:05 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.Class.hpp"
#include "ScavTrap.Class.hpp"

#pragma once

class DiamondTrap : public FragTrap, public ScavTrap
{
  public:
	DiamondTrap();
	DiamondTrap(const std::string name);
	DiamondTrap(const DiamondTrap &copy);
	~DiamondTrap();
	DiamondTrap &operator=(const DiamondTrap &copy);
	void whoAmI();

  private:
	std::string _Name;
};