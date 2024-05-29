/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 10:04:51 by aherrman          #+#    #+#             */
/*   Updated: 2024/05/22 09:40:22 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::map<std::string, float> parsedata(std::ifstream &data)
{
    std::map<std::string, float> mdata;
    std::string line;
    std::string date;
    std::string temp;
    while (std::getline(data, line))
    {
        int pos = line.find(",");
        date = line.substr(0, pos);
        temp = line.substr(pos + 1);
        mdata[date] = std::atof(temp.c_str());
    }
    return mdata;
}

// std::map<std::string, int> parsefile(std::ifstream &data)
// {
//     std::map<std::string, int> mdata;
//     std::string line;
//     std::string date;
//     std::string temp;
//     int i = 0;
//     while (std::getline(data, line))
//     {
//         std::cout << i << " => " << line << std::endl;
//         i++;
//         int pos = line.find("|");
//         date = line.substr(0, pos);
//         temp = line.substr(pos + 1);
//         mdata[date] = std::atoi(temp.c_str());
//     }
//     return mdata;
// }

int main(int ac, char **av)
{
    std::ifstream data("data.csv");

    if (data.is_open())
    {
        std::map<std::string, float> mdata = parsedata(data);
        if (ac == 2)
        {
                exchange(mdata, av[1]);
        }
        else
            std::cerr << "only one argument is allowed" << std::endl;
    }
    else
        std::cerr << "can't open data file " << std::endl;
    return (0);
}