/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 09:38:33 by aherrman          #+#    #+#             */
/*   Updated: 2024/05/14 09:38:58 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
std::cout << mstack.top() << std::endl;
mstack.pop();
std::cout << mstack.size() << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);
//[...]
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
std::stack<int> s(mstack);
return 0;
}