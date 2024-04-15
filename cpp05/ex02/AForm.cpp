/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:38:26 by aherrman          #+#    #+#             */
/*   Updated: 2024/04/11 09:40:59 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

Form::AForm() : _name("default"), _signGrade(150), _execGrade(150), _signed(false)
{
    return;
}
AForm::AForm(std::string name, int signGrade, int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade), _signed(false)
{
    if (signGrade < 1 || execGrade < 1)
        throw AForm::GradeTooHighException();
    if (signGrade > 150 || execGrade > 150)
        throw AForm::GradeTooLowException();
    return;
}
AForm::AForm(AForm const &src) : _name(src._name), _signGrade(src._signGrade), _execGrade(src._execGrade), _signed(src._signed)
{
    return;
}
AForm::~AForm()
{
    return;
}
AForm &AForm::operator=(AForm const &src)
{
    if (this != &src)
    {
        _signed = src._signed;
    }
    return *this;
}
std::string AForm::getName() const
{
    return _name;
}
int AForm::getSignGrade() const
{
    return _signGrade;
}
int AForm::getExecGrade() const
{
    return _execGrade;
}
bool AForm::getSigned() const
{
    return _signed;
}
void AForm::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > _signGrade)
        throw AForm::GradeTooLowException();
    else
        _signed = true;
}
const char *AForm::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}
const char *AForm::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}
std::ostream &operator<<(std::ostream &out, AForm const &in)
{
    out << "AForm " << in.getName() << " is " << (in.getSigned() ? "" : "not ") << "signed. It requires grade " << in.getSignGrade() << " to be signed and grade " << in.getExecGrade() << " to be executed."<< std::endl;
    return out;
}
