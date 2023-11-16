/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.Class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:02:39 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/16 11:10:18 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.Class.hpp"
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <limits>
#include <string>

class Phonebook
{
  public:
	Phonebook(void);
	~Phonebook(void);
	void add(void);
	void search(void);

  private:
	Contact _contact[8];
	int _index;
};