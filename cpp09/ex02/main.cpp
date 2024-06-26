/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:39:51 by aherrman          #+#    #+#             */
/*   Updated: 2024/05/29 16:08:14 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool valid_is_int(char *av)
{
    long int tmp = std::atol(av);
    if (tmp > std::numeric_limits<int>::max() || tmp < std::numeric_limits<int>::min())
    {
        std::cout << "Error: out of int range" << std::endl;
        return (true);
    }
    return (false);
}

bool valid_arguments(char **av)
{
    int i = 1;
    while (av[i])
    {
        int j = 0;
        while (av[i][j])
        {
            if (!isdigit(av[i][j]))
                return (true);
            j++;
        }
        if (valid_is_int(av[i]))
            return (true);
        i++;
    }
    return (false);
}

bool is_sort(std::list<long long int> list)
{
    for (std::list<long long int>::iterator it = list.begin(); it != list.end(); it++)
    {
        std::list<long long int>::iterator it2 = it;
        it2++;
        if (it2 != list.end() && *it > *it2)
            return (false);
    }
    std::cout << "List is sorted" << std::endl;
    return (true);
}

int main(int ac, char **av)
{
    std::clock_t pstart = std::clock();
    std::list<long long int> list;
    std::vector<long long int> vector;
    std::list<long long int> s_list;
    std::vector<long long int> s_vector;
    if (ac < 2)
    {
        std::cout << "Error: not enough arguments" << std::endl;
        return (1);
    }
    else
    {
        if (valid_arguments(av))
        {
            std::cout << "Error: invalid arguments" << std::endl;
            return (1);
        }
        for (int i = 1; av[i]; i++)
        {
            std::string str(av[i]);
            list.push_back(std::atoll(av[i]));
            vector.push_back(std::atoll(av[i]));
        }
        if (is_sort(list) || list.size() < 2 || valid_no_doublon(list))
            return (1);
        std::cout << "Before sort " << std::endl;
        print_list_vector(list, vector, 2);
        std::cout << std::endl
                  << "start sort" << std::endl;
        std::clock_t start = std::clock();
        s_list = sort_list(list);
        std::clock_t end = std::clock();
        double t1 = (TUS * (end - start) / CLOCKS_PER_SEC);
        print_list_vector(s_list, vector, 0);
        start = std::clock();
        s_vector = sort_vector(vector);
        end = std::clock();
        double t2 = (TUS * (end - start) / CLOCKS_PER_SEC);
        print_list_vector(list, s_vector, 1);
        std::cout << std::endl
                  << "time for vector: " << t2 << "us" << std::endl;
        std::cout << "time for list: " << t1 << "us" << std::endl;
        std::cout << "size of list: " << list.size() << " sort list " << s_list.size() << std::endl;
        std::cout << "size of vector: " << vector.size() << " sort vector " << s_vector.size() << std::endl;
        std::clock_t pend = std::clock();
        std::cout << "total exec time: " << (TUS * (pend - pstart) / CLOCKS_PER_SEC) << "ms and total sort time " << t1 + t2 << " us" << std::endl;
    }

    return (0);
}