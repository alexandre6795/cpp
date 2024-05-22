/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 10:04:26 by aherrman          #+#    #+#             */
/*   Updated: 2024/05/21 15:34:55 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data *data = generate("Jerome", 3);
    uintptr_t serialzed = Serializer::serialize(data);
    Data *deserialized = Serializer::deserialize(serialzed);

    if (data == deserialized)
    {
        std::cout << "Data is the same" << std::endl;
        std::cout << "Data name: " << data->name << " de " << data->nbexam << std::endl;
        std::cout << "Deserialized name: " << deserialized->name << " de " << deserialized->nbexam << std::endl;
    }
    else
        std::cout << "Data is different" << std::endl;

    Data *data2 = generate("Quentin", 42);
    uintptr_t serialzed2 = Serializer::serialize(data2);
    Data *deserialized2 = Serializer::deserialize(serialzed2);

    if (data2 == deserialized2)
    {
        std::cout << "Data is the same" << std::endl;
        std::cout << "Data name: " << data2->name << " de " << data2->nbexam << std::endl;
        std::cout << "Deserialized name: " << deserialized2->name << " de " << deserialized2->nbexam << std::endl;
    }
    else
        std::cout << "Data is different" << std::endl;

    if (deserialized2 == deserialized)
        std::cout << "Deserialized1 and 2 are the same" << std::endl;
    else
        std::cout << "Deserialized 1 and 2 are different" << std::endl;

    return (0);
}