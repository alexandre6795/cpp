/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamontTrap.Class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:16:55 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/29 10:17:22 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.Class.hpp"

DiamondTrap::DiamondTrap() :
{
    this->_Name = "noname";
     ClapTrap::_Name = _Name + "_clap_name";
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(), FragTrap()
{
    ClapTrap::_Name = _Name + "_clap_name";
    this->_Name = name;
    this->_Hit = FragTrap::getHit();
    this->_Energy = ScavTrap::_Energy;
    this->_Attack = FragTrap::_Attack;
    std::cout << "DiamondTrap name constructor called" << std::endl;
}
