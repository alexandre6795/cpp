// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   MutantStack.hpp                                    :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2024/05/15 09:17:26 by aherrman          #+#    #+#             */
// /*   Updated: 2024/05/15 15:34:50 by aherrman         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

 #pragma once

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <map>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack();
    MutantStack(const MutantStack<T>  &other);
    MutantStack &operator=(MutantStack const &other);
    ~MutantStack();

    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin(){return(std::stack<T>::c.begin());};
    iterator end(){return(std::stack<T>::c.end());};
};

// #pragma once

// #include <stack>

// template <typename T>
// class MutantStack : public std::stack<T>
// {
//         public:
//     //Orthodox Canonical Form
//     MutantStack();//default constructor
//     ~MutantStack();//destructor
//     MutantStack(const MutantStack<T> &	newMutantStack); //cpy constructor
//     MutantStack<T>& operator=(const MutantStack<T>& objectToCopy); //Copy assignment operator

//     typedef typename std::stack<T>::container_type::iterator iterator;
//     iterator begin() { return std::stack<T>::c.begin();}
//     iterator end() { return std::stack<T>::c.end();}
// };
#include "MutantStack.tpp"