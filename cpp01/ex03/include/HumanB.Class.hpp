/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:43:02 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/21 15:19:50 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "../include/Weapon.Class.hpp"

class HumanB
{
    public:
    HumanB(const std::string &name);
    ~HumanB(void);
    void attack()const;
    void setWeapon( Weapon &Weapon);
    private:
    std::string _name;
    Weapon *_weapon;
    
};