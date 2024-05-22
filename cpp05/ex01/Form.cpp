/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:38:26 by aherrman          #+#    #+#             */
/*   Updated: 2024/05/15 11:41:19 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _signGrade(150), _execGrade(150), _signed(false)
{
    return;
}
Form::Form(std::string name, int signGrade, int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade), _signed(false)
{
    if (signGrade < 1 || execGrade < 1)
        throw Form::GradeTooHighException();
    else if (signGrade > 150 || execGrade > 150)
        throw Form::GradeTooLowException();
    return;
}
Form::Form(Form const &src) : _name(src._name), _signGrade(src._signGrade), _execGrade(src._execGrade), _signed(src._signed)
{
    return;
}
Form::~Form()
{
    return;
}
Form &Form::operator=(Form const &src)
{
    if (this != &src)
    {
        _signed = src._signed;
    }
    return *this;
}
std::string Form::getName() const
{
    return _name;
}
int Form::getSignGrade() const
{
    return _signGrade;
}
int Form::getExecGrade() const
{
    return _execGrade;
}
bool Form::getSigned() const
{
    return _signed;
}
void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() >= _signGrade)
        throw Form::GradeTooLowException();
    else if (_signed)
        std::cout << "Form " << _name << " is already signed" << std::endl;
    else
        _signed = true;
}
const char *Form::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}
const char *Form::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}
std::ostream &operator<<(std::ostream &out, Form const &in)
{
    out << "Form " << in.getName() << " is " << (in.getSigned() ? "" : "not ") << "signed. It requires grade " << in.getSignGrade() << " to be signed and grade " << in.getExecGrade() << " to be executed." << std::endl;
    return out;
}
