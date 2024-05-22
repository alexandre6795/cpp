/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 09:17:44 by aherrman          #+#    #+#             */
/*   Updated: 2024/05/15 16:13:23 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
MutantStack<int> mstack;
std::list<int> list;
mstack.push(5);
mstack.push(17);
std::cout << " TOP "<< mstack.top() << std::endl;
mstack.pop();
std::cout << mstack.size() << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);
mstack.push(0);
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
++it;
--it;
while (it != ite)
{
std::cout << *it << std::endl;
++it;
}

std::cout << "List" << std::endl;

list.push_back(5);
list.push_back(17);
std::cout <<" front "<< list.front() << std::endl;
list.pop_back();
std::cout << list.size() << std::endl;
list.push_back(3);
list.push_back(5);
list.push_back(737);
list.push_back(0);

for(std::list<int>::iterator it = list.begin(); it != list.end(); it++)
{
    std::cout << *it << std::endl;
}

MutantStack<std::string> mstack2;
mstack2.push("Hello");
mstack2.push("World");
mstack2.push("!");
for (MutantStack<std::string>::iterator it =mstack2.begin(); it != mstack2.end(); it++)
{
std::cout << *it << std::endl;
}
std::cout << "Vector" << std::endl;
std::vector<std::string> vec;
vec.push_back("Hello");
vec.push_back("World");
vec.push_back("!");
for (std::vector<std::string>::iterator it = vec.begin(); it != vec.end(); it++)
{
    std::cout << *it << std::endl;
}

return 0;
}