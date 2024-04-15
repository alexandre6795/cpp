/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 09:32:16 by aherrman          #+#    #+#             */
/*   Updated: 2024/04/15 10:28:28 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137, target)
{
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm(src)
{
    *this = src;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src)
{
    if (this != &src)
    {
        AForm::operator=(src);
    }
    return *this;
}
void ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
    std::ofstream file(this->getTarget() + "_shrubbery");
    file.open(this->getTarget() + "_shrubbery");
    if(file.fail())
    {
        std::cerr << "Error opening file" << std::endl;
        return;
    }
    if(file.is_open())
    
}