/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:42:59 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/21 14:58:35 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "../include/Weapon.Class.hpp"

class HumanA
{
    public:
    HumanA(const std::string &name,const Weapon &weapon);
    ~HumanA(void);
    void attack()const;
    private:
    std::string _name;
   const Weapon &_Weapon;
    
};