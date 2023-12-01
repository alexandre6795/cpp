/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.Class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:20:32 by aherrman          #+#    #+#             */
/*   Updated: 2023/12/01 11:10:54 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include "AMateria.Class.hpp"

class Ice : public AMateria
{
    private:
    
    Ice();
    Ice(const std::string const &type);
    ~Ice();
    Ice(const Ice &copy);
    Ice &operator=(const Ice &copy);
    
    
    public:
  void   use(ICharacter & c);
}