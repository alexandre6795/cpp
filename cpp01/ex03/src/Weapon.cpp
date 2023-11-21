/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:49:48 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/21 15:23:02 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.Class.hpp"

Weapon::Weapon(std::string str) : _type(str)
{
	//std::cout << "create Weapon" << std::endl;
	return ;
}
Weapon::~Weapon(void)
{
	//std::cout << "kill Weapon" << std::endl;
	return ;
}
void Weapon::setType(std::string str)
{
	_type = str;
}

const std::string Weapon::getType() const
{
	return (_type);
}