/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:49:34 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/17 12:37:25 by aherrman         ###   ########.fr       */
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
	if (_index >= 7)
		_index = 0;
	else
		_index++;
}

static std::string shrink(std::string str)
{
	if (str.length() <= 10)
		return (str);
	str.resize(10);
	str[9] = '.';
	return (str);
}

void Phonebook::col(int rows)
{
	std::cout << "|  INDEX   |";
	std::cout << "FIRST NAME|";
	std::cout << "LAST NAME |";
	std::cout << " NICK NAME|";
	std::cout << std::endl;
	for (int i = 0; i < rows; i++)
		std::cout << "-";
	std::cout << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (this->_contact[i].getfname().empty())
			break ;
		std::cout << "|";
		std::cout << std::setw(10) << std::right << (i + 1) << "|";
		std::cout << std::setw(10) << std::right << shrink(this->_contact[i].getfname()) << "|";
		std::cout << std::setw(10) << std::right << shrink(this->_contact[i].getlname()) << "|";
		std::cout << std::setw(10) << std::right << shrink(this->_contact[i].getnname()) << "|";
		std::cout << std::endl;
		for (int i = 0; i < rows; i++)
			std::cout << "-";
		std::cout << std::endl;
	}
}

static void	base_tab(void)
{
	int	rows;

	rows = 45;
	for (int i = 0; i < rows; i++)
		std::cout << "-";
	std::cout << std::endl;
	for (int i = 0; i < rows; ++i)
	{
		if (i == 0 || i == rows - 1)
		{
			std::cout << "|";
		}
		else if (i == (rows - 11) / 2)
		{
			std::cout << " Phonebook ";
			i += 10;
		}
		else
			std::cout << " ";
	}
	std::cout << std::endl;
	for (int i = 0; i < rows; i++)
		std::cout << "-";
	std::cout << std::endl;
}

void Phonebook::printcontact(int i)
{
	std::cout << "Contact number :" << i << std::endl;
	std::cout << "First name :" << this->_contact[i].getfname() << std::endl;
	std::cout << "Last name :" << this->_contact[i].getlname() << std::endl;
	std::cout << "Nick name :" << this->_contact[i].getnname() << std::endl;
	std::cout << "Phone number :" << this->_contact[i].getphone() << std::endl;
	std::cout << "Darkest secret :" << this->_contact[i].getsecret() << std::endl;
}

void Phonebook::search(void)
{
	int	i;

	i = -1;
	std::string str;
	base_tab();
	col(45);
	if ((this->_contact[0].getfname().empty()))
		std::cout << "no contact in PHONEBOOK";
	do
	{
		std::cout << "write index number: ";
		if (!std::getline(std::cin, str))
			exit(0);
		else if (str.find('\t') != std::string ::npos)
		{
			std::cout << "tab dans la chaine" << std::endl;
		}
		else if (str.empty())
			std::cout << "empty is not okay okay ?" << std::endl;
		std::istringstream iss(str);
		if (!(iss >> i))
		{
			std::cerr << "Erreur : la conversion en int a échoué." << std::endl;
			i = -1;
		}
		else if(i <= 0 || i > 8)
		{
			std::cout << "max contact are 8 select number 1 to 8 and you ask: " << i << std::endl;
			i = -1;
		}
		else if (this->_contact[i-1].getfname().empty())
		{
			std::cout << "you have select empty contact" << std::endl;
			i = -1;
		}
	} while (i == -1);
	printcontact(i-1);
}
