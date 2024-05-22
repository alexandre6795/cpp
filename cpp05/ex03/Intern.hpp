/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 09:42:54 by aherrman          #+#    #+#             */
/*   Updated: 2024/05/15 11:42:23 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:
    static AForm *createShrubberyCreation(std::string target);
    static AForm *createRobotomyRequest(std::string target);
    static AForm *createPresidentialPardon(std::string target);

public:
    Intern();
    Intern(Intern const &src);
    ~Intern();
    Intern &operator=(Intern const &src);

    AForm *makeForm(std::string name, std::string target);

    class UnknownFormException : public std::exception
    {
        virtual const char *what() const throw()
        {
            return "Unknown Form name";
        }
    };
};