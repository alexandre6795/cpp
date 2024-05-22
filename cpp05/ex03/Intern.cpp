/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 09:42:40 by aherrman          #+#    #+#             */
/*   Updated: 2024/05/21 09:09:15 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
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

AForm *Intern::makeForm(std::string name, std::string target)
{
    AForm *newf = NULL;
    std::string formname[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    AForm *(*form[3])(std::string) = {ShrubberyCreation, RobotomyRequest, PresidentialPardon};
    if (name != formname[0] && name != formname[1] && name != formname[2])
        throw Intern::UnknownFormException();
    for (int i = 0; i < 3; i++)
    {
        if (name == formname[i])
        {
            if (i != 43)
                newf = form[i](target);
        }
    }
    return newf;
}