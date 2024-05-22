/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:23:04 by aherrman          #+#    #+#             */
/*   Updated: 2024/05/15 15:55:58 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
MutantStack<T>::MutantStack()
{
    std::cout << "default constructor called" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const &other)
{
    std::cout << "copy constructor called" << std::endl;
    *this = other;
 *this = other;   
}
template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack const &other)
{
    std::cout << "copy assignment operator called" << std::endl;
    if (this != &other)
    {
        *this = other;
    }
    return *this;
}
template <typename T>
MutantStack<T>::~MutantStack()
{
    std::cout << "destructor called" << std::endl;

}

// //Orthodox Canonical Form
 
// //default constructor
// template <typename T>
// MutantStack<T>::MutantStack()
// {
//     std::cout << "\033[0;36mDefault constructor called\033[0m " << std::endl;
// }

// //destructor
// template <typename T>
// MutantStack<T>::~MutantStack()
// {
//     std::cout << "\033[0;31mDestructor called\033[0m " << std::endl;
  
// }

//  //cpy constructor
// template <typename T>
// MutantStack<T>::MutantStack(const MutantStack<T> &	newMutantStack)
// {
//     std::cout << "\033[0;36mCopy constructor called\033[0m " << std::endl;
//     *this = newMutantStack;
//  }

//  //Copy assignment operator
// template <typename T>
// MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& objectToCopy)
// {
//     std::cout << "\033[0;36mCopy assignment operator called\033[0m " << std::endl;
//     if (this != &objectToCopy)
//     {
//         this->c = objectToCopy.c;
//     }
//     return (*this);
// }

