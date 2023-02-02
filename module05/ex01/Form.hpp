/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 05:24:39 by tjo               #+#    #+#             */
/*   Updated: 2023/02/03 04:59:13 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Bureaucrat;

class Form
{
    private:
        const std::string name;
        bool is_signed;
        const int grade_sign;
        const int grade_execute;
        
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

        Form();
        void gradeCheck();
    public:
        Form(const std::string&, int grade_sign, int grade_execute);
        ~Form();
        Form(const Form&);
        Form& operator=(const Form&);
        
        void beSigned(const Bureaucrat&);
        const std::string& getName() const;
        bool isSigned() const;
        int getGradeSign() const;
        int getGradeExecute() const;
};

std::ostream& operator<<(std::ostream&, const Form&);