/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:50:48 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/20 12:05:45 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.Class.hpp"

void	randomChump(std::string name)
{
	Zombie Zombiepasmem = Zombie(name);
	Zombiepasmem.message();
	// annonce car si on sort de la il existe plus
}