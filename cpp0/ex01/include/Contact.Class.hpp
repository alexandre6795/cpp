/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:04:35 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/16 11:10:25 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <limits>
#include <string>

class Contact
{
  public:
	Contact(void);
	~Contact(void);
	void setfname(std::string str);
	void setlname(std::string str);
	void setnname(std::string str);
	void setphone(std::string str);
	void setsecret(std::string str);
	std::string getfname(void);
	std::string getlname(void);
	std::string getnname(void);
	std::string getphone(void);
	std::string getsecret(void);

  private:
	std::string _fname;
	std::string _lname;
	std::string _nname;
	std::string _phone;
	std::string _secret;
};
