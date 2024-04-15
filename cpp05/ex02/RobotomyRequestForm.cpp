/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 09:32:21 by aherrman          #+#    #+#             */
/*   Updated: 2024/04/11 10:41:54 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45, target)
{
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : AForm(src)
{
    *this = src;
}
RobotomyRequestForm::~RobotomyRequestForm()
{
}
RobotomyRequestForm::RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & src)
{
    if (this != &src)
    {
        AForm::operator=(src);
    }
    return *this;
}
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if(executor.getGrade()>this->getGradeToExecute() && !this->_signed==true)
    {
        throw AForm::GradeTooLowException();
    }
    std::cout << "SOME DRILLING NOISES" << std::endl;
    for ( int i = 0; i < 10; i++)
        {
            std::string str = "DRRRRR...";
            std::string str = str + "RRRRRRRRR";
            std::cout << str << std::endl;
        }
    if (rand() %2 == 0)
        std::cout << this-> << " has been robotomized successfully" << std::endl;
    else
    {
        std::cout << this-> << " has failed to be robotomized" << std::endl;
        
    }
}