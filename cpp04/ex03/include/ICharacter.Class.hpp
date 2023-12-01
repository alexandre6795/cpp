/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.Class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:58:55 by aherrman          #+#    #+#             */
/*   Updated: 2023/12/01 11:10:58 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
class ICharacter
{
    public:
    ICharacter();
    ICharacter(std::string const &name);
    ICharacter(const ICharacter &copy);
    ICharacter&operator=(const ICharacter &copy);
    virtual ~ICharacter(){};
    virtual std::string const &getName() const = 0;
    virtual void equip (AMateria *m) = 0;
    Virtual void unequip(int idx) = 0;
    virtual void use (int idx , ICharacter &target) = 0;
    private:
    AMateria *materia[3];
    std::string _Name;
}
std::ostream & operator<<(std::ostream& o,ICharacter const &rhs);