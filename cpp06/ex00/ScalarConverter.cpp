/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 09:11:43 by aherrman          #+#    #+#             */
/*   Updated: 2024/05/21 15:36:44 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}
ScalarConverter::ScalarConverter(std::string input)
{
    convert(input);
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &rhs)
{
    if (this != &rhs)
    {
    }
    return *this;
}

void intConversion(std::string const &input)
{
    std::cout << "intConversion" << std::endl;
    std::cout << "input = " << input << std::endl;
    long int value = std::atoi(input.c_str());
    if (value > 0 && value < 127)
        if (isprint(value))
            std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: impossible" << std::endl;

    std::cout << "int: " << value << std::endl;
    std::cout << "float: " << static_cast<float>(value) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(value) << ".0" << std::endl;
}

void floatConversion(std::string const &input)
{
    std::cout << "floatConversion" << std::endl;
    {
        float fvalue = std::atof(input.c_str());
        long int value = static_cast<int>(fvalue);
        if ((value > 0 && value < 127))
            if (isprint(value))
                std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
            else
                std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: impossible" << std::endl;

        std::cout << "int: " << static_cast<int>(value) << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(30) << fvalue << "0f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(30) << static_cast<double>(fvalue) << std::endl;
    }
}

void doubleConversion(std::string const &input)
{
    std::cout << "doubleConversion" << std::endl;
    {
        double dvalue = std::atof(input.c_str());
        long int value = static_cast<int>(dvalue);
        if (value > 0 && value < 127)
            if (isprint(value))
                std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
            else
                std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: impossible" << std::endl;

        std::cout << "int: " << static_cast<int>(value) << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(30) << static_cast<float>(dvalue) << "0f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(30) << dvalue << std::endl;
    }
}

void charConversion(std::string const &input)
{
    std::cout << "charConversion" << std::endl;
    std::cout << "char: " << input << std::endl;
    std::cout << "int: " << static_cast<int>(input[0]) << std::endl;
    std::cout << "float: " << static_cast<float>(input[0]) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(input[0]) << ".0" << std::endl;
}
bool accept_char(const char c)
{
    if (c == 'f' || c == '+' || c == '-' || c == '.')
        return (true);
    return (false);
}

bool isonlydigit(std::string const &input)
{
    int point = 0;
    int f = 0;
    int sign = 0;
    for (size_t i = 0; i < input.length(); i++)
    {
        if (input[i] == '.')
            point++;
        if (input[i] == 'f')
            f++;
        if (input[i] == '-' || input[i] == '+')
            sign++;
        if ((!isdigit(input[i]) && !accept_char(input[i])) || (sign > 1 || f > 1 || point > 1))
        {
            std::cout << "input[i]= " << input[i] << " point = " << point << " f =" << f << " sign =" << sign << std::endl;
            return false;
        }
    }
    return true;
}
std::string typdef(std::string const &input)
{
    if (input == "nan" || input == "nanf")
        return ("char : impossible\nint : impossible\nfloat : nanf\ndouble : nan\n");
    else if (input == "inf" || input == "inff" || input == "+inf" || input == "+inff")
        return ("char : impossible\nint : impossible\nfloat : +inff\ndouble : +inf\n");
    else if (input == "-inf" || input == "-inff")
        return ("char : impossible\nint : impossible\nfloat : -inff\ndouble : -inf\n");
    else if (input.length() == 1 && isalpha(input[0]))
        return ("char");
    else if ((isonlydigit(input)) || (input.find_last_of("-") == 0 || input.find_last_of("+") == 0))
    {
        long double Value = std::atof(input.c_str());
        std::cout << "Value = " << Value << std::endl;
        if (input.find('.') != std::string::npos || (Value > 2147483647 || Value < -2147483648))
        {
            if (input.find('f') != std::string::npos)
                return ("float");
            else
                return ("double");
        }
        else
            return ("int");
    }
    return ("invalid input " + input);
}

void ScalarConverter::convert(std::string input)
{
    std::string type = typdef(input);

    if (type == "int")
        intConversion(input);
    else if (type == "float")
        floatConversion(input);
    else if (type == "double")
        doubleConversion(input);
    else if (type == "char")
        charConversion(input);
    else
        std::cout << type << std::endl;
    return;
}
