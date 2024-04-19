/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 09:34:54 by aherrman          #+#    #+#             */
/*   Updated: 2024/04/18 13:25:15 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    
    Bureaucrat b1;
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
    Bureaucrat b2("b2", 1);
    Bureaucrat b3("b3", 150);
    

    //test for default constructor
    std::cout << b1 << std::endl;
    for (int i = 0; i < 20; i++)
        b1.incrementGrade();
    b1.callNandG();
    for (int i = 0; i < 10; i++)
        b1.decrementGrade();
     b1.callNandG();

    //test for name constructor and high grade
     b2.callNandG();
        try{
            std::cout << "try to increment b2 grade" << std::endl;
         b2.incrementGrade();
        }
        catch(const std::exception &e)
        {
        std::cerr << e.what() << std::endl;
        }
     b2.callNandG();
     std::cout << "try to decrement b2 grade" << std::endl;
    b2.decrementGrade();
    b2.callNandG();
    
    //test for name constructor and low grade
 b3.callNandG();
        try
        {
            std::cout << "try to decrement b3 grade" << std::endl;
          b3.decrementGrade();
        }
        catch(const std::exception &e)
        {
        std::cerr << e.what() << std::endl;
        }
     b3.callNandG();
std::cout << "try to increment  b3 grade" << std::endl;
    b3.incrementGrade();
   b3.callNandG();
   
    
    
    return (0);
}