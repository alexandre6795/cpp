/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:49:34 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/15 11:50:16 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Phonebook.Class.hpp"

Phonebook::Phonebook(void):_index(0) 
{
    std::cout<< "phonebook constructeur"<< std::endl;
}
Phonebook::~Phonebook(void)
{
    std::cout<< "phonebook destructeur"<< std::endl;
}

static const std::string getuser(const std::string msg)
{

    std::string input;
    input = "";
    while(input.empty())
    {
    std::cout << msg;
    if(!std::getline(std::cin,input)||input.find('\t')!=std::string::npos)
    {
      std::cout << "signaux non valide ou tab dans la chaine" << std::endl;
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      input = "";
    }
    else 
    break;
    }
    return(input);
}

void Phonebook::add(void)
{
    std:: string str;
str = getuser("first name please :");
    this->_contact[_index].setfname(str);
    str = getuser("last name please :");
    this->_contact[_index].setlname(str);
    str = getuser("nick name please :");
    this->_contact[_index].setnname(str);
    str = getuser("phone please :");
    this->_contact[_index].setphone(str);
    str = getuser("secret please :");
    this->_contact[_index].setsecret(str);
    if(_index >= 8)
    _index = 0;
else
_index++;
}

void Phonebook::search(void)
{
    std::cout<< "aaaaa";

}