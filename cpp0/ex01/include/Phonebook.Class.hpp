/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.Class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:02:39 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/17 12:22:20 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.Class.hpp"
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>

class Phonebook
{
  public:
	Phonebook(void);
	~Phonebook(void);
	void add(void);
	void search(void);
	void col(int rows);
	void printcontact(int i);

  private:
	Contact _contact[8];
	int _index;
};