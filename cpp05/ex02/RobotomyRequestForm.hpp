/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 09:31:50 by aherrman          #+#    #+#             */
/*   Updated: 2024/04/15 10:11:47 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#Pragma once

#Include "AForm.hpp"

Class RobotomyRequestForm : Public AForm
{
    public:
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm const & src);
    ~RobotomyRequestForm();
    RobotomyRequestForm & operator=(RobotomyRequestForm const & src);
    void execute(Bureaucrat const & executor) const;
    
}