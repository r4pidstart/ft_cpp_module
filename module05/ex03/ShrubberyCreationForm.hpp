/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 04:49:13 by tjo               #+#    #+#             */
/*   Updated: 2023/02/03 05:36:59 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

/* 
Required grades: sign 145, exec 137
Create a file <target>_shrubbery in the working directory, and writes ASCII trees
inside it.
*/

#include"AForm.hpp"

class ShrubberyCreationForm : public Form
{
    private:
        ShrubberyCreationForm();
        class CannotExecuteException : public std::exception
        {
            public:
                const char* what() const throw();
        };

    public:
        ShrubberyCreationForm(const std::string& target);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm& a);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& a);

        void execute(Bureaucrat const & executor) const;
};