/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 09:34:54 by aherrman          #+#    #+#             */
/*   Updated: 2024/05/15 11:41:45 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat b2("b2", 1);
    Bureaucrat b3("b3", 150);
    Bureaucrat b4("b4", 72);
    Bureaucrat b5("b5", 45);
    // AForm f1("f1", 1, 1);
    ShrubberyCreationForm s("home");
    RobotomyRequestForm r("OBO");
    RobotomyRequestForm rr("OBO");
    PresidentialPardonForm p("BOB");

    std::cout << "Bureaucrat " << "\n"
              << b2 << b3 << b4 << b5 << std::endl;
    std::cout << "Form " << "\n"
              << s << r << p << std::endl;
    try
    {
        b2.signForm(r);
        b2.executeForm(r);
        b2.signForm(p);
        b2.executeForm(p);
        b2.signForm(s);
        b2.executeForm(s);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        b3.signForm(r);
        b3.executeForm(r);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        b3.signForm(s);
        b3.executeForm(s);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        b3.signForm(p);
        b3.executeForm(p);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    // try{
    //     // b4.signForm(rr);
    //     //b4.executeForm(r);
    // }
    // catch(const std::exception & e)
    // {
    //     std::cerr << e.what() << std::endl;
    // }
    try
    {
        // b4.signForm(rr);
        b5.executeForm(rr);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return (0);
}