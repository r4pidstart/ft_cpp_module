/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 05:45:29 by tjo               #+#    #+#             */
/*   Updated: 2023/02/03 06:04:21 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include "string"
#include <exception>

class Intern
{
    private:
        class TargetFormDoNotExist : public std::exception
        {
            public:
                const char* what() const throw();
        };

        Form* makePresidential(const std::string& targetName);
        Form* makeRobotomy(const std::string& targetName);
        Form* makeShrubbery(const std::string& targetName);
    public:
        Intern();
        ~Intern();
        Intern(const Intern &a);
        Intern& operator=(const Intern &a);
        Form* makeForm(const std::string& targetForm, const std::string& targetName);
};