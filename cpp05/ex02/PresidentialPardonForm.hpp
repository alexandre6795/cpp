/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 09:30:26 by aherrman          #+#    #+#             */
/*   Updated: 2024/04/15 10:12:51 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#Pragma once

#Include "AForm.hpp"

Class PresidentialPardonForm : Public AForm
{
    public:
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm const & src);
    ~PresidentialPardonForm();
    PresidentialPardonForm & operator=(PresidentialPardonForm const & src);
    void execute(Bureaucrat const &executor) const;
}