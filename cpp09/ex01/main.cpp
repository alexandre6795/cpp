/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 11:14:34 by aherrman          #+#    #+#             */
/*   Updated: 2024/05/27 13:40:56 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool valid_char(char *av)
{
    int i = 0;
    bool sign = false;
    bool space = false;
    while (av[i])
    {
        if (av[i] == ' ')
            space = true;
        else if ((i == 0 || space) && (av[i] == '+' || av[i] == '-' || av[i] == '*' || av[i] == '/' || isdigit(av[i])))
        {
            space = false;
            if (av[i] == '+' || av[i] == '-' || av[i] == '*' || av[i] == '/')
                sign = true;
        }
        else
        {
            std::cout << "Error: wrong input" << std::endl;
            return (true);
        }
        i++;
    }
    if (!sign)
    {
        std::cout << "Error: no sign" << std::endl;
        return (true);
    }
    return (false);
}

bool valid(char av)
{
    if ((av == ' ' || av == '+' || av == '-' || av == '*' || av == '/') || isdigit(av))
        return (false);
    return (true);
}

bool issign(char av)
{
    if (av == '+' || av == '-' || av == '*' || av == '/')
        return (true);
    return (false);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        if (valid_char(av[1]))
            return (1);
        int delta = 0;
        std::stack<long long int> stack;
        for (int i = 0; av[1][i]; i++)
        {
            if (valid(av[1][i]))
            {
                std::cout << "Error: -> " << av[1][i] << " <- wrong input" << std::endl;
                return (1);
            }
            else if (issign(av[1][i]))
            {
                delta--;
                if (delta <= 0)
                {
                    std::cout << "Error: not enough numbers for sign" << std::endl;
                    return (1);
                }
                else
                {
                    long long int a = stack.top();
                    stack.pop();
                    long long int b = stack.top();
                    stack.pop();
                    if (av[1][i] == '+')
                        stack.push(b + a);
                    else if (av[1][i] == '-')
                        stack.push(b - a);
                    else if (av[1][i] == '*')
                        stack.push(b * a);
                    else if (av[1][i] == '/' && a != 0 && b != 0)
                        stack.push(b / a);
                    else
                    {
                        std::cout << "Error: division by 0" << std::endl;
                        return (1);
                    }
                }
            }
            else if (isdigit(av[1][i]))
            {
                stack.push(av[1][i] - '0');
                delta++;
            }
            // std::cout << "Delta = " << delta << std::endl;
        }
        if (delta != 1)
        {
            std::cout << "Error: too many numbers" << std::endl;
            return (1);
        }
        // std::cout << " end Delta = " << delta << std::endl;
        std::cout << stack.top() << std::endl;
        stack.pop();
    }
    else
        std::cout << "RPN ask only one argument ex: ./RPN \"8 9 * 9 - 9 - 9 - 4 - 1 +\" " << std::endl;
    return (0);
}