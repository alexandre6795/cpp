/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:49:34 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/16 11:48:40 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Phonebook.Class.hpp"

Phonebook::Phonebook(void) : _index(0)
{
	std::cout << "phonebook constructeur" << std::endl;
}
Phonebook::~Phonebook(void)
{
	std::cout << "phonebook destructeur" << std::endl;
}

static const std::string getuser(const std::string msg)
{
	std::string input;
	input = "";
	std::cout << msg;
	if (!std::getline(std::cin, input))
	{
		std::cout << "signaux non valide dans le champ" << std::endl;
		std::cin.clear();
		input = "signaux non valide";
	}
	else if (input.find('\t') != std::string ::npos)
	{
		std::cout << "tab dans la chaine" << std::endl;
	}
	else if (input.empty())
		std::cout << "empty is not okay okay ?" << std::endl;
	return (input);
}

void Phonebook::add(void)
{
	std::string str;
	do
	{
		str = getuser("first name please :");
		if (str == "signaux non valide")
			exit(0);
	} while (str.empty());
	this->_contact[_index].setfname(str);
	do
	{
		str = getuser("last name please :");
		if (str == "signaux non valide")
			exit(0);
	} while (str.empty());
	this->_contact[_index].setlname(str);
	do
	{
		str = getuser("nick name please :");
		if (str == "signaux non valide")
			exit(0);
	} while (str.empty());
	this->_contact[_index].setnname(str);
	do
	{
		str = getuser("phone please :");
		if (str == "signaux non valide")
			exit(0);
	} while (str.empty());
	this->_contact[_index].setphone(str);
	do
	{
		str = getuser("secret please :");
		if (str == "signaux non valide")
			exit(0);
	} while (str.empty());
	this->_contact[_index].setsecret(str);
	if (_index >= 2)
		_index = 0;
	else
		_index++;
}

// static std::string shrink(std::string str)
// {
// 	if (str.length() <= 10)
// 		return (str);
// 	str.resize(10);
// 	str[9] = '.';
// 	return (str);
// }

void	base_tab(void)
{
	char	s;
	int		size;

	s = '$';
	size = 110;
    size = (size / 11) * 11;
	for (int i = 0; i < size; i++)
		std::cout << s;
	std::cout << std::endl;
	for (int i = 0; i < size; ++i)
	{
		if (i == 0 || i == size - 1)
		{
			std::cout << s;
		}
		else if (size - i > 11)
		{
			std::cout << " Phonebook ";
			i += 10;
		}
		else
			std::cout << " ";
	}
	std::cout << std::endl;
	for (int i = 0; i < size; i++)
		std::cout << s;
	std::cout << std::endl;
}

void Phonebook::search(void)
{
	base_tab();
}