/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 08:48:33 by aherrman          #+#    #+#             */
/*   Updated: 2024/04/10 13:44:43 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _Name("unknow"), _Grade(150)
{
    std::cout << GREEN << "Bureaucrat Default constructor called" << RESET << std::endl;
    return ;
}

Bureaucrat::Bureaucrat(const std::string name , int grade) : _Name(name) , _Grade(grade)
{
    std::cout << GREEN << "Bureaucrat name constructor called" << RESET << std::endl;
    return ;
}
Bureaucrat::~Bureaucrat()
{
    std::cout << RED << "Bureaucrat Destructor called" << RESET << std::endl;
    return ;
}
Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
    std::cout << "Bureaucrat Copy constructor called" << std::endl;
    *this=copy;
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
       std::cout <<"Name: " << this->getName() << " grade level: " << this->getGrade() << std::endl;
}

std::ostream & operator <<(std::ostream &os, const Bureaucrat &b) {
    std::cout << GREEN << "Bureaucrat operator << called" << RESET << std::endl;
    os << "Name: " << b.getName() << " grade level: " << b.getGrade() << std::endl;
    return os;
}