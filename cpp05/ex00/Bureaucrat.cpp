/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 08:48:33 by aherrman          #+#    #+#             */
/*   Updated: 2024/05/15 15:13:56 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("unknow"), _Grade(150)
{
    std::cout << GREEN << "Bureaucrat Default constructor called" << RESET << std::endl;
    return;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _Grade(grade)
{
    if (this->_Grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (this->_Grade > 150)
        throw Bureaucrat::GradeTooLowException();
    std::cout << GREEN << "Bureaucrat name constructor called" << RESET << std::endl;
    return;
}
Bureaucrat::~Bureaucrat()
{
    std::cout << RED << "Bureaucrat Destructor called" << RESET << std::endl;
    return;
}
Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
    std::cout << "Bureaucrat Copy constructor called" << std::endl;
    *this = copy;
}
Bureaucrat & ::Bureaucrat::operator=(Bureaucrat const &copy)
{
    std::cout << " Bureaucrat Copy assignment operator called" << std::endl;
    if (this != &copy)
    {
        this->_Grade = copy._Grade;
    }
    return (*this);
}
std::string Bureaucrat::getName() const
{
    return (this->_name);
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

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b)
{
    std::cout << GREEN << "Bureaucrat operator << called" << RESET << std::endl;
    os << "Name: " << b.getName() << " grade level: " << b.getGrade() << std::endl;
    return os;
}