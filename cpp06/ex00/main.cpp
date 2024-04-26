/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 09:11:57 by aherrman          #+#    #+#             */
/*   Updated: 2024/04/26 11:15:58 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void inttest()
{
    std::string a = "'65'";
    std::cout << "INT CONVERT" << std::endl;
        ScalarConverter::convert("--65");
        ScalarConverter::convert(a);
        ScalarConverter::convert("0");
        ScalarConverter::convert("2147483647");
        ScalarConverter::convert("-2147483648");
        ScalarConverter::convert("-0");
        ScalarConverter::convert("+0");
    std::cout << "INT STOP" << std::endl;
}
void floattest()
{
    std::cout << "FLOAT CONVERT" << std::endl;
        ScalarConverter::convert("3.14f");
        
            std::cout << "FLOAT STOP" << std::endl;

}
void doubletest()
{
    std::cout << "Double CONVERT" << std::endl;
        ScalarConverter::convert("3.14");
                ScalarConverter::convert("214748364700.454");
        ScalarConverter::convert("-214748364800.7895");
            std::cout << "DOUBLE STOP" << std::endl;
}
void chartest()
{
    std::string c = "'c'";
    std::string d = "c";
    std::cout << "CHAR CONVERT" << std::endl;
        ScalarConverter::convert("c");
        ScalarConverter::convert(d);
        ScalarConverter::convert(c);
            std::cout << "CHAR STOP" << std::endl;
}

void specialtest()
{
    std::cout << "Special cases" << std::endl;
        ScalarConverter::convert("-inf");
        ScalarConverter::convert("+inf");
        ScalarConverter::convert("nan");

        std::cout << "Special cases stop" << std::endl;
}

int main (int ac , char **av)
{
    if (ac != 2 && ac != 1)
    {
        std::cout << "Error: Invalid number of arguments" << std::endl;
        return 1;
    }
    if (ac == 1)
    {
        chartest();
        inttest();
        floattest();
        doubletest();
        specialtest();
    }
    else
        ScalarConverter::convert(av[1]);
    return 0;
}