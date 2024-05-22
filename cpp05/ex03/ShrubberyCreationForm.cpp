/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 09:32:16 by aherrman          #+#    #+#             */
/*   Updated: 2024/05/15 11:42:43 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137, "default")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm(src)
{
    *this = src;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137, target)
{
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
    if (this != &src)
    {
        AForm::operator=(src);
    }
    return *this;
}
void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    std::cout << "Bureaucrat " << executor.getName() << " executed " << this->getName() << std::endl;
    std::string filename = getTarget() + "_shrubbery";
    std::ofstream file(filename.c_str());
    if (!file.is_open())
        return;
    else
    {
        for (int i = 0; i < 5; i++)
        {
            file << "   #    " << "   #    " << std::endl;
            file << "  ###   " << "  ###   " << std::endl;
            file << " #####  " << " #####  " << std::endl;
            file << "####### " << "####### " << std::endl;
            file << "   #    " << "   #    " << std::endl;
            file << "   #    " << "   #    " << std::endl;
            file << std::endl;
        }
        file.close();
    }
    return;
}