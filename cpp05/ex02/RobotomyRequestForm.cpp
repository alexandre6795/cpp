/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 09:32:21 by aherrman          #+#    #+#             */
/*   Updated: 2024/05/15 11:41:54 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45, "default")
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm(src)
{
    *this = src;
}
RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45, target)
{
}
RobotomyRequestForm::~RobotomyRequestForm()
{
}
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
    if (this != &src)
    {
        AForm::operator=(src);
    }
    return *this;
}
void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    std::cout << "Bureaucrat " << executor.getName() << " executed " << this->getName() << std::endl;
    std::cout << "SOME DRILLING NOISES" << std::endl;
    std::string str = "DRRRRR...";
    for (int i = 0; i < 10; i++)
    {
        str.append("RRRRRRRRR");
        std::cout << str << std::endl;
    }
    srand(time(NULL));
    if (rand() % 2 == 0)
        std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
    else
    {
        std::cout << this->getTarget() << " has failed to be robotomized" << std::endl;
    }
}