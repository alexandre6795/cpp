/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.Class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:20:32 by aherrman          #+#    #+#             */
/*   Updated: 2023/12/04 09:22:56 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.Class.hpp"

class Ice : public AMateria
{
  public:
	Ice();
	Ice( std::string const &type);
	~Ice();
	Ice(const Ice &copy);
	Ice &operator=(const Ice &copy);

	void use(ICharacter &c);
	AMateria *clone() const;
};