/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.Class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 13:36:44 by aherrman          #+#    #+#             */
/*   Updated: 2023/12/01 13:44:33 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.Class.hpp"

class Character : public ICharacter
{
  public:
    
    Character();
    Character(const std::string const &name);
    ~Character();
    Character(const Character &copy);
    Character &operator=(const Character &copy);
    
        std::string const &getName() const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
    private:
    std::string _Name;
    AMateria *_Inventory[3];
};