/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:36:12 by aherrman          #+#    #+#             */
/*   Updated: 2024/04/10 14:46:59 by aherrman         ###   ########.fr       */
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

class Form
{
private:
    const std::string _name;
    const int _signGrade;
    const int _execGrade;
    bool _signed;
    public:
    Form();
    Form(std::string name, int signGrade, int execGrade);
    Form(Form const &src);
    ~Form();
    Form &operator=(Form const &src);
    std::string getName() const;
    int getSignGrade() const;
    int getExecGrade() const;
    bool getSigned() const;
    void beSigned(Bureaucrat &bureaucrat);
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
std::ostream &operator<<(std::ostream &out, Form const &in);