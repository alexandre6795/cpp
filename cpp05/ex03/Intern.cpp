/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 09:42:40 by aherrman          #+#    #+#             */
/*   Updated: 2024/04/19 11:21:37 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() :_binder(NULL) , _nbform(0)
{
    
    return;
}
Intern::Intern(Intern const &src)
{
    *this = src;
    return;
}
Intern::~Intern()
{
    std::cout << "Intern destructor called" << std::endl;
    if(_binder)
    {
        std::cout << "Intern binder destructor called" << std::endl;
    for(int i = 0; i < _nbform; i++)
        delete _binder[i];
    }
    delete [] _binder;
    return;
}
Intern &Intern::operator=(Intern const &src)
{
    if (this != &src)
    {
    }
    return *this;
}

static AForm *ShrubberyCreation(std::string target)
{
    return (new ShrubberyCreationForm(target));
}
static AForm *RobotomyRequest(std::string target)
{
    return (new RobotomyRequestForm(target));
}

static AForm *PresidentialPardon(std::string target)
{
    return (new PresidentialPardonForm(target));
}


AForm *Intern::makeForm(std::string name , std::string target)
{
    std::string formname[3] = {"shrubbery creation","robotomy request","presidential pardon"};
    AForm *(*form[3])(std::string) = {ShrubberyCreation, RobotomyRequest, PresidentialPardon};
    if (name != formname[0] && name != formname[1] && name != formname[2])
        throw Intern::UnknownFormException();
    for (int i = 0; i < 3; i++)
    {
        if (name == formname[i])
        {
            std::cout << "Intern creates " << name <<  "total of" << _nbform << " form "<<  std::endl;
           AForm *newf= form[i](target);
            AForm **tmp = new AForm *[_nbform+1];
            if (_binder)
            {
            for (int j = 0; j < _nbform; j++)
                tmp[j] = _binder[j];
            }
            tmp[_nbform] = newf;
            delete [] _binder;
            _binder = tmp;
            _nbform++;
            return newf;
            
        }
    }
    return NULL;

}