/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:49:08 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/23 09:22:44 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.Class.hpp"

Contact::Contact(void)
{
	//std::cout << "Contact constructeur" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	//std::cout << "Contact destructeur" << std::endl;
	return ;
}

void Contact::setfname(std::string str)
{
	_fname = str;
}
void Contact::setlname(std::string str)
{
	_lname = str;
}
void Contact::setnname(std::string str)
{
	_nname = str;
}
void Contact::setphone(std::string str)
{
	_phone = str;
}
void Contact::setsecret(std::string str)
{
	_secret = str;
}
std::string Contact::getfname(void)
{
	return (_fname);
}
std::string Contact::getlname(void)
{
	return (_lname);
}
std::string Contact::getnname(void)
{
	return (_nname);
}
std::string Contact::getphone(void)
{
	return (_phone);
}
std::string Contact::getsecret(void)
{
	return (_secret);
}