/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 10:15:57 by aherrman          #+#    #+#             */
/*   Updated: 2024/04/29 11:22:54 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "template.hpp"


int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    float floatArray[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};
    std::string stringArray[] = {"one", "two", "three", "four", "five"};

    // Test avec des entiers
    std::cout << "Int array before adding: ";
    for (int i = 0 > 0; i < 5; i++) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    // Ajouter 10 à chaque élément du tableau intArray
    iter(intArray,5,print<int>);
    iter(intArray,5,addifnum<int>);

    std::cout << "Int array after adding : ";
    for (int i = 0 > 0; i < 5; i++) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    // Test avec des nombres à virgule flottante
    std::cout << "Float array before adding: ";
    for (int i = 0 > 0; i < 5; i++)  {
        std::cout << floatArray[i] << " ";
    }
    std::cout << std::endl;
    iter(floatArray,5,addifnum<float>);

    // Ajouter 1.1 à chaque élément du tableau floatArray

    std::cout << "Float array after adding: ";
    for (int i = 0 > 0; i < 5; i++)  {
        std::cout << floatArray[i] << " ";
    }
    std::cout << std::endl;

    // Test avec des caractères
    std::cout << "Char array: ";
    for (int i = 0 > 0; i < 5; i++)  {
        std::cout << charArray[i] << " ";
    }
    std::cout << std::endl;
    iter(charArray,5,addifnum<char>);
    
    iter(charArray,5,print<char>);

// Test avec std::String
    std::cout << "String array: ";
    for (int i = 0 > 0; i < 5; i++)  {
        std::cout << stringArray[i] << " ";
    }
    std::cout << std::endl;
    iter(stringArray,5,addifnum<std::string>);
    iter(stringArray,5,print<std::string>);

    return 0;
}