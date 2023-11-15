/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:04:35 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/15 11:43:00 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Contact
{
  public:
	Contact(void);
	~Contact(void);

  private:
	std::string _fname;
	std::string _lname;
	std::string _nname;
	std::string _phone;
	std::string _secret;
};
