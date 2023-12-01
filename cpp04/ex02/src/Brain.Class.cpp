/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.Class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:03:53 by aherrman          #+#    #+#             */
/*   Updated: 2023/12/01 09:11:49 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.Class.hpp"

Brain::Brain()
{
	std::cout << GREEN << "Brain Default constructor called" <<RESET<< std::endl;
	return ;
}
Brain::~Brain()
{
	std::cout << RED << "Brain Destructor called" <<RESET<< std::endl;
	return ;
}
Brain::Brain(const Brain &copy)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = copy;
}
Brain & ::Brain::operator=(const Brain &copy)
{
	std::cout << " Brain Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		for(int i = 0; i< 100;i++)
		this->Idea[i]=copy.Idea[i];
	}
	
	return (*this);
}
