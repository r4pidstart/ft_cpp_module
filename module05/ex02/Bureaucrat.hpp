/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 04:54:04 by tjo               #+#    #+#             */
/*   Updated: 2023/02/03 04:59:32 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <exception>
#include <istream>
#include <string>

class Bureaucrat
{
    private:
        const std::string name;
        int grade;

        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw();
        };
        
        Bureaucrat();
        void gradeCheck();
    public:
        Bureaucrat(const std::string&, int);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat&);
        Bureaucrat& operator=(const Bureaucrat&);
        const std::string& getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
        int signForm(Form&) const;

        int executeForm(Form const & form);
};

std::ostream& operator<<(std::ostream&, const Bureaucrat&);
