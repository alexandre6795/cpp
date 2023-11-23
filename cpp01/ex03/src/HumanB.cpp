/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:13:39 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/23 09:40:39 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.Class.hpp"

HumanB::HumanB(const std::string &name) : _name(name), _weapon(0)
{
	//std::cout << "create HumanA" << std::endl;
	return ;
}
HumanB::~HumanB(void)
{
	//std::cout << "kill HumanA" << std::endl;
	return ;
}

void HumanB::setWeapon( Weapon &Weapon)
{
    this->_weapon = &Weapon;
}
void HumanB::attack() const
{
	if (_weapon == NULL)
		std::cout << this->_name << " attacks with NULLPTR it's not very effective" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}