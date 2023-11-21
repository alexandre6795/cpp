/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:15:46 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/21 11:30:29 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.Class.hpp"

Zombie::Zombie() : _name("Default Zombie")
{
}

Zombie::~Zombie(void)
{
	std::cout << _name << " detruit" << std::endl;
	return ;
}

void Zombie::message()
{
	std::cout << _name << " : BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
