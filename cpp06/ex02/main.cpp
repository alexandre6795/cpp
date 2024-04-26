/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 09:08:32 by aherrman          #+#    #+#             */
/*   Updated: 2024/04/26 09:53:35 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main ()
{
    Base *base = generate();
    indentify_ptr(base);
    identify_ref(*base);
    delete base;
    return 0;
    
}