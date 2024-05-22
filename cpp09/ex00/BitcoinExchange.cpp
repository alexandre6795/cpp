/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 11:36:45 by aherrman          #+#    #+#             */
/*   Updated: 2024/05/21 15:57:43 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool is_leap_year(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return (true);
    return (false);
}

bool valid_days(int month, int day, bool leap)
{
    int d[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (leap)
        d[1] = 29;
    if (day >= 1 && day <= d[month])
        return (true);
    return (false);
}

bool valid_month(int month)
{
    if (month >= 1 && month <= 12)
        return (true);
    return (false);
}

bool valid_date(std::string date)
{
    bool valid = false;
    std::string temp[3];
    temp[0] = date.substr(0, 4);
    temp[1] = date.substr(5, 2);
    temp[2] = date.substr(8, 2);
    int year = std::atoi(temp[0].c_str());
    int month = std::atoi(temp[1].c_str());
    int day = std::atoi(temp[2].c_str());
    if (year >= 2009 && year <= 2022 && valid_month(month))
        valid = valid_days(month, day, is_leap_year(year));
    return (valid);
}

void exchange(std::map<std::string, int> &mdata, std::ifstream file)
{
    std::string line;
    std::string date;
    std::string temp;
    float bicoinnb;
    while (std::getline(file, line))
    {
        int pos = line.find("|");
        date = line.substr(0, pos);
        temp = line.substr(pos + 1);
        float bicoinnb = std::atof(temp.c_str());
        if(valid_date(date))
        {
            if (mdata.find(date) != mdata.end())
                std::cout << date << " " << bicoinnb << " " << mdata.lower_bound()[date] << std::endl;
            else
                std::cerr << "date not found in data.csv" << std::endl;
        }
        else
            std::cerr << "invalid date" << std::endl;
        }
    }
}