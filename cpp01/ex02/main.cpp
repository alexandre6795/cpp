/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 09:09:15 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/21 09:29:48 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;

	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "str adress :" << &str << std::endl;
	std::cout << "strPTR adress :" << stringPTR << std::endl;
	std::cout << "strREF adress :" << &stringREF << std::endl;

	std::cout << "str value :" << str << std::endl;
	std::cout << "strPTR value :" << *stringPTR << std::endl;
	std::cout << "strREF value :" << stringREF << std::endl;
	return (0);
}