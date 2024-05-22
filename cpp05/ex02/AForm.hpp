/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:36:12 by aherrman          #+#    #+#             */
/*   Updated: 2024/05/15 11:41:36 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
protected:
    const std::string _name;
    const int _signGrade;
    const int _execGrade;
    bool _signed;
    const std::string _target;

public:
    AForm();
    AForm(std::string name, int signGrade, int execGrade, std::string target);
    AForm(AForm const &src);
    virtual ~AForm();
    AForm &operator=(AForm const &src);
    std::string getName() const;
    int getSignGrade() const;
    int getExecGrade() const;
    bool getSigned() const;
    std::string getTarget() const;
    void beSigned(Bureaucrat &bureaucrat);
    virtual void execute(Bureaucrat const &executor) const = 0;
    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };
    class FormNotSignedException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };
};
std::ostream &operator<<(std::ostream &out, AForm const &in);