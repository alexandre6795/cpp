/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 09:48:21 by aherrman          #+#    #+#             */
/*   Updated: 2023/11/20 16:04:09 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

# include <cstdlib>
# include <ctime>
# include <iomanip>
# include <iostream>
# include <limits>
# include <sstream>
# include <string>

class Zombie
{
  public:
	Zombie();
	Zombie(std::string nomZombie);
	~Zombie(void);
	void message();
	Zombie* zombieHorde(int N, std::string name);

  private:
	std::string _name;
};

#endif