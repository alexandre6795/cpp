/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Curse.Class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:20:32 by aherrman          #+#    #+#             */
/*   Updated: 2023/12/01 10:39:28 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.Class.hpp"

class Curse : public AMateria
{
  public:
    
    Curse();
    ~Curse();
    Curse(const Curse &copy);
    Curse &operator=(const Curse &copy);
    
  AMateria *clone() ;
  void   use(ICharacter & c);
}