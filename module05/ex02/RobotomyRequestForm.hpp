/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 04:48:56 by tjo               #+#    #+#             */
/*   Updated: 2023/02/03 05:36:54 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

/*
Required grades: sign 72, exec 45
Makes some drilling noises. Then, informs that <target> has been robotomized
successfully 50% of the time. Otherwise, informs that the robotomy failed.
*/

#include"AForm.hpp"

class RobotomyRequestForm : public Form
{
    private:
        RobotomyRequestForm();
        class CannotExecuteException : public std::exception
        {
            public:
                const char* what() const throw();
        };

    public:
        RobotomyRequestForm(const std::string& target);
        ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm& a);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& a);

        void execute(Bureaucrat const & executor) const;
};