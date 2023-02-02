/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 04:48:39 by tjo               #+#    #+#             */
/*   Updated: 2023/02/03 05:36:57 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

/*
 Required grades: sign 25, exec 5
Informs that <target> has been pardoned by Zaphod Beeblebrox.
*/

#include"AForm.hpp"

class PresidentialPardonForm : public Form
{
    private:
        PresidentialPardonForm();
        class CannotExecuteException : public std::exception
        {
            public:
                const char* what() const throw();
        };

    public:
        PresidentialPardonForm(const std::string& target);
        ~PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm& a);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& a);

        void execute(Bureaucrat const & executor) const;
};