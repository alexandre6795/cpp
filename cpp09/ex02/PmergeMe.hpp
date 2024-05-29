/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 11:14:00 by aherrman          #+#    #+#             */
/*   Updated: 2024/05/29 14:55:25 by aherrman         ###   ########.fr       */
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
#include <stack>

bool valid_no_doublon(std::list<long long int> list);
void print_list_vector(std::list<long long int> list, std::vector<long long int> vector, int sort);
std::list<long long int> sort_list(std::list<long long int> list);
std::vector<long long int > sort_vector(std::vector<long long int> vector);
