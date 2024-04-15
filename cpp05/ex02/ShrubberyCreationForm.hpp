/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 09:32:02 by aherrman          #+#    #+#             */
/*   Updated: 2024/04/15 10:11:53 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    public:
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm const & src);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm & operator=(ShrubberyCreationForm const & src);
    void execute(Bureaucrat const & executor) const;
}
