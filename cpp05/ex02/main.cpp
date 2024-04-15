/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 09:34:54 by aherrman          #+#    #+#             */
/*   Updated: 2024/04/11 10:28:20 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat b2("b2", 1);
    Bureaucrat b3("b3", 150);
    
    std::cout << "Bureaucrat " << b2 << "," << b3 << ","  << std::endl;
    try
    {
        
    }
    catch(const Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << e.what() << std::endl;

    }
    return (0);
}