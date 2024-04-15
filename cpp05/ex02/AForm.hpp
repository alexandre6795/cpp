/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:36:12 by aherrman          #+#    #+#             */
/*   Updated: 2024/04/15 10:11:23 by aherrman         ###   ########.fr       */
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
    public:
    AForm();
    AForm(std::string name, int signGrade, int execGrade);
    AForm(Form const &src);
    virtual ~AForm();
    AForm &operator=(AForm const &src);
    std::string getName() const;
    int getSignGrade() const;
    int getExecGrade() const;
    bool getSigned() const;
    void beSigned(Bureaucrat &bureaucrat);
    virtual void execute(Bureaacrat const &executor); const = 0;
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
};
std::ostream &operator<<(std::ostream &out, AForm const &in);