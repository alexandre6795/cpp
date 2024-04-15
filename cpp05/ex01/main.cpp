/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 09:34:54 by aherrman          #+#    #+#             */
/*   Updated: 2024/04/10 15:30:02 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat b2("b2", 1);
    Bureaucrat b3("b3", 150);
    Form f1("f1", 1, 1);
    Form f2("f2", 150, 150);
    Form f3("f3", 1, 150);
    Form f4("f4", 150, 1);
    
    std::cout << "Bureaucrat " << b2 << "," << b3 << ","  << std::endl;
    std::cout << "Form " << f1 << "," << f2 << "," << f3 << "," << f4 << std::endl;
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
    return (0);
}