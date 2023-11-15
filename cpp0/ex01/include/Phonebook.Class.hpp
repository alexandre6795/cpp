/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.Class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:02:39 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/15 11:36:56 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <limits>
#include "Contact.Class.hpp"

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