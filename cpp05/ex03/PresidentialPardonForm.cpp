/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 09:32:24 by aherrman          #+#    #+#             */
/*   Updated: 2024/04/19 08:59:21 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5, "default")
{
}

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
void PresidentialPardonForm::execute(Bureaucrat const &executor)const
{
    std::cout << "Bureaucrat " << executor.getName() << " executed " << this->getName() << std::endl;
    std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
