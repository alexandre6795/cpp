/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:02:53 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/21 15:23:20 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.Class.hpp"

HumanA::HumanA(const std::string &name, const Weapon &Weapon) : _name(name),
	_Weapon(Weapon)
{
	//std::cout << "create HumanA" << std::endl;
	return ;
}
HumanA::~HumanA(void)
{
	//std::cout << "kill HumanA" << std::endl;
	return ;
}
void HumanA::attack()const
{
	std::cout << this->_name << " attacks with their " << this->_Weapon.getType() << std::endl;
}