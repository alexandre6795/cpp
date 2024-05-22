/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 08:48:33 by aherrman          #+#    #+#             */
/*   Updated: 2024/05/15 11:41:15 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _Name("unknow"), _Grade(150)
{
    return;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _Name(name), _Grade(grade)
{
    if (this->_Grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (this->_Grade > 150)
        throw Bureaucrat::GradeTooLowException();
    return;
}
Bureaucrat::~Bureaucrat()
{
    return;
}
Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
    *this = copy;
}
Bureaucrat & ::Bureaucrat::operator=(Bureaucrat const &copy)
{
    if (this != &copy)
    {
        this->_Grade = copy._Grade;
    }
    return (*this);
}
std::string Bureaucrat::getName() const
{
    return (this->_Name);
}
int Bureaucrat::getGrade() const
{
    return (this->_Grade);
}
void Bureaucrat::incrementGrade()
{
    if (this->_Grade == 1)
        throw Bureaucrat::GradeTooHighException();
    this->_Grade--;
}
void Bureaucrat::decrementGrade()
{
    if (this->_Grade == 150)
        throw Bureaucrat::GradeTooLowException();
    this->_Grade++;
}

void Bureaucrat::callNandG()
{
    std::cout << "Name: " << this->getName() << " grade level: " << this->getGrade() << std::endl;
}
void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        if (form.getSigned() == true)
            std::cout << "Bureaucrat " << this->getName() << " signed " << form.getName() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Bureaucrat " << this->getName() << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}
std::ostream &operator<<(std::ostream &os, const Bureaucrat &b)
{
    std::cout << GREEN << "Bureaucrat operator << called" << RESET << std::endl;
    os << "Name: " << b.getName() << " grade level: " << b.getGrade() << std::endl;
    return os;
}