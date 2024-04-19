/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 09:34:54 by aherrman          #+#    #+#             */
/*   Updated: 2024/04/18 13:37:56 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
        try
    {
           Bureaucrat negatifman("negatifman", -1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
        try
    {
               Bureaucrat positifman("positifman", 151);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
            try
    {
           Form negatifform("negatifform", -1, -1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
        try
    {
               Form negatifform("negatifform", 151, 151);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
    Bureaucrat b2("b2", 1);
    Bureaucrat b3("b3", 150);
    Bureaucrat b4("b4",50);
     Bureaucrat b5("b5",51);
    Form f1("f1", 1, 1);
    Form f2("f2", 150, 150);
    Form f3("f3", 1, 150);
    Form f4("f4", 150, 1);
    Form f5("f5",50,51);
    
    std::cout << "Bureaucrat \n" << b2  << b3  << b4  << b5 << std::endl;
    std::cout << "Form \n" << f1  << f2  << f3  << f4 << f5 << std::endl;
    try
    {
        std::cout << "f1 beSigned by b2" << std::endl;
        b2.signForm(f1);
        std::cout << "f1 beSigned by b3" << std::endl;
        b3.signForm(f1);
    }
    catch(const Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(const Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << e.what() <<std::endl;
    }
    catch(const Form::GradeTooHighException& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(const Form::GradeTooLowException& e)
    {
        std::cerr << e.what() << std::endl;
    }   

    try
    {
        b4.signForm(f5);
        b5.signForm(f5);
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;     
    }
    return (0);
}