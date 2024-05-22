/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 10:05:41 by aherrman          #+#    #+#             */
/*   Updated: 2024/05/21 13:50:03 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>
#include <stdint.h>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <map>
#include <exception>
#include <fstream>

bool is_leap_year(int year);
bool valid_days(int month, int day, bool leap);
bool valid_month(int month);
bool valid_date(std::string date);
void exchange(std::map<std::string, int> &mdata, std::map<std::string, int> &mfile);

