/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 09:11:43 by aherrman          #+#    #+#             */
/*   Updated: 2024/04/24 13:33:45 by aherrman         ###   ########.fr       */
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


 void intConversion(std::string const& input)
 {
   long  int value = std::atoi(input.c_str());
    if(value > 0 && value < 127 )
        if (isprint(value))
            std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
        else
             std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: imposible" << std::endl;

    std::cout << "int: " << value << std::endl;
    std::cout << "float: " << std::fixed <<std::setprecision(15) << static_cast<float>(value) << ".0f" << std::endl;
    std::cout << "double: " << std::fixed <<std::setprecision(15) << static_cast<double>(value) <<  std::endl;
 }

void floatConversion(std::string const& input)
{
     {
    float fvalue = std::atof(input.c_str());
  long  int value = static_cast<int>(fvalue);
    if((value > 0 && value < 127 ))
        if (isprint(value))
            std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
        else
             std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: imposible" << std::endl;

    std::cout << "int: " << static_cast<int>(value) << std::endl;
    std::cout << "float: " << std::fixed <<std::setprecision(100) << fvalue << ".0f" << std::endl;
    std::cout << "double: " << std::fixed <<std::setprecision(100) << static_cast<double>(fvalue) <<  std::endl;
 }

}

void doubleConversion(std::string const& input)
{
     {
    double dvalue = std::atof(input.c_str());
   long int value = static_cast<int>(dvalue);
    if(value > 0 && value < 127 )
        if (isprint(value))
            std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
        else
             std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: imposible" << std::endl;

    std::cout << "int: " << static_cast<int>(value) << std::endl;
    std::cout << "float: " << std::fixed <<std::setprecision(100) << static_cast<float>(dvalue) << ".0f" << std::endl;
    std::cout << "double: " << std::fixed <<std::setprecision(100) << dvalue <<  std::endl;
 }

}

void charConversion(std::string const& input)
{
    std::cout << "char: " << input << std::endl;
    std::cout << "int: " << static_cast<int>(input[0]) << std::endl;
    std::cout << "float: " << std::fixed <<std::setprecision(100) << static_cast<float>(input[0]) << ".0f" << std::endl;
    std::cout << "double: " << std::fixed <<std::setprecision(100) << static_cast<double>(input[0]) <<  std::endl;  
}

bool isonlydigit(std::string const& input)
{
    for (size_t i = 1; i < input.length(); i++)
    {
        if (!isdigit(input[i]) && input[i] != '.' && input[i] != 'f')
            return false;
    }
    return true;
}
std::string typdef(std::string const& input)
{
    if(input == "nan" || input == "nanf")
        return ("char : impossible\nint : impossible\nfloat : -inff\ndouble : -inf\n");
    else if (input == "inf" || input == "inff" || input == "+inf" || input == "+inff")
        return ("char : impossible\nint : impossible\nfloat : +inff\ndouble : +inf\n");
    else if (input == "-inf" || input == "-inff")
        return ("char : impossible\nint : impossible\nfloat : -inff\ndouble : -inf\n");
    else if (input.length() == 1 && isalpha(input[0]))
    return ("char");
    else if (( isonlydigit(input) ) ||(  input.find_last_of("-") == 0 || input.find_last_of("+")) == 0)
    {
        
        if (input.find('.') != std::string::npos)
        {
            if(input.find('f') != std::string::npos)
                return ("float");
            else
                return ("double");
        }
        else
            return ("int");
    }
    return("invalid input "  + input  );
}

 void ScalarConverter::convert(std::string input)
{
 std::string type = typdef(input);

 if(type == "int")
    intConversion(input);
 else if(type == "float")
    floatConversion(input);
 else if(type == "double")
    doubleConversion(input);
 else if(type == "char")
    charConversion(input);
 else
    std::cout << type << std::endl;
return;
    
}

