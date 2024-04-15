/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 09:32:24 by aherrman          #+#    #+#             */
/*   Updated: 2024/04/15 10:14:47 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5, target)
{
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : AForm(src)
{
    *this = src;
}
PresidentialPardonForm::~PresidentialPardonForm()
{
}
PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & src)
{
    if (this != &src)
    {
        AForm::operator=(src);
    }
    return *this;
}
void PresidentialPardonForm::execute(Bureaucrat const &executor)
{
    if(executor.get(getGrade) > this->getGradeToExecute() && !this->getSigned())
    {
        throw AForm::GradeTooLowException();
    }
    std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
