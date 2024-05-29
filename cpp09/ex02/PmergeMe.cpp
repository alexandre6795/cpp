/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:48:26 by aherrman          #+#    #+#             */
/*   Updated: 2024/05/29 14:56:05 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool valid_no_doublon(std::list<long long int> list)
{
    std::set<long long int> set;
    for (std::list<long long int>::iterator it = list.begin(); it != list.end(); it++)
    {
        if (set.find(*it) != set.end())
        {
            std::cout << "Error: doublon in list" << std::endl;
            return (true);
        }
        set.insert(*it);
    }
    return (false);
}

// sort 0 for list 1 for vector >2 for twice
void print_list_vector(std::list<long long int> list, std::vector<long long int> vector, int sort)
{
    if (sort == 0 || sort >= 2)
    {
        std::cout << "List: " << std::endl;
        for (std::list<long long int>::iterator it = list.begin(); it != list.end(); it++)
            std::cout << *it << " ";
    }
    if (sort == 1 || sort >= 2)
    {
        std::cout << std::endl
                  << "Vector: " << std::endl;
        for (std::vector<long long int>::iterator it = vector.begin(); it != vector.end(); it++)
            std::cout << *it << " ";
    }
}
// sort for list
// bool is_sorted_list(const std::list<long long int> &list)
// {
//     bool sort1 = true;
//     bool sort2 = true;
//     std::list<long long int>::const_iterator tmp = list.begin();
//     for (std::list<long long int>::const_iterator it = list.begin(); it != list.end(); it++)
//     {
//         if (*it > *tmp)
//         {
//             sort1 = false;
//             break;
//         }
//         if (*it < *tmp)
//         {
//             sort2 = false;
//             break;
//         }
//         tmp = it;
//     }
//     if (sort1 || sort2)
//         return (true);
//     return (false);
// }

std::list<long long int> merge_sorted_lists(std::list<long long int> &list1, std::list<long long int> &list2)
{
    std::list<long long int> result;
    for (std::list<long long int>::iterator it1 = list1.begin(), it2 = list2.begin(); it1 != list1.end() || it2 != list2.end();)
    {
        if (it1 == list1.end())
        {
            result.push_back(*it2);
            it2++;
        }
        else if (it2 == list2.end())
        {
            result.push_back(*it1);
            it1++;
        }
        else if (*it1 < *it2)
        {
            result.push_back(*it1);
            it1++;
        }
        else
        {
            result.push_back(*it2);
            it2++;
        }
    }
    return (result);
}

std::list<long long int> sort_list(std::list<long long int> list)
{
    std::list<std::list<long long int> > ret;
    for (std::list<long long int>::iterator it = list.begin(); it != list.end(); it++)
    {
        std::list<long long int> tmp;
        tmp.push_back(*it);
        ret.push_back(tmp);
    }
    while (ret.size() > 1)
    {
        std::list<std::list<long long int> > tmp2;
        for (std::list<std::list<long long int> >::iterator it = ret.begin(); it != ret.end();)
        {
            std::list<std::list<long long int> >::iterator next = it;
            next++;
            if (next != ret.end())
            {
                tmp2.push_back(merge_sorted_lists(*it, *next));
                next++;
                it = next;
            }
            else
            {
                tmp2.push_back(*it);
                it++;
            }
        }
        ret = tmp2;
    }
    return (ret.front());
}
std::vector<long long int> merge_sorted_vectors(std::vector<long long int> &vector1, std::vector<long long int> &vector2)
{
    std::vector<long long int> result;
    for (std::vector<long long int>::iterator it1 = vector1.begin(), it2 = vector2.begin(); it1 != vector1.end() || it2 != vector2.end();)
    {
        if (it1 == vector1.end())
        {
            result.push_back(*it2);
            it2++;
        }
        else if (it2 == vector2.end())
        {
            result.push_back(*it1);
            it1++;
        }
        else if (*it1 < *it2)
        {
            result.push_back(*it1);
            it1++;
        }
        else
        {
            result.push_back(*it2);
            it2++;
        }
    }
    return (result);
}

std::vector<long long int> sort_vector(std::vector<long long int> vector)
{
    std::vector<std::vector<long long int> > ret;
    for (std::vector<long long int>::iterator it = vector.begin(); it != vector.end(); it++)
    {
        std::vector<long long int> tmp;
        tmp.push_back(*it);
        ret.push_back(tmp);
    }
    while (ret.size() > 1)
    {
        std::vector<std::vector<long long int> > tmp2;
        for (std::vector<std::vector<long long int> >::iterator it = ret.begin(); it != ret.end();)
        {
            std::vector<std::vector<long long int> >::iterator next = it;
            next++;
            if (next != ret.end())
            {
                tmp2.push_back(merge_sorted_vectors(*it, *next));
                next++;
                it = next;
            }
            else
            {
                tmp2.push_back(*it);
                it++;
            }
        }
        ret = tmp2;
    }
    return (ret.front());
}
