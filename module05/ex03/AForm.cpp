/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 05:24:45 by tjo               #+#    #+#             */
/*   Updated: 2023/02/03 05:11:34 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>

void Form::gradeCheck()
{
    if(grade_sign < 1 or grade_execute < 1)
        throw GradeTooHighException();
    else if(grade_sign > 150 or grade_execute > 150)
        throw GradeTooLowException();
}

Form::Form() : grade_sign(0), grade_execute(0)
{
    gradeCheck();
}

Form::Form(const std::string& name, int grade_sign, int grade_execute) : name(name), grade_sign(grade_sign), grade_execute(grade_execute)
{
    is_signed=0;
    gradeCheck();
}

Form::~Form()
{

}

Form::Form(const Form& a) : grade_sign(a.grade_sign), grade_execute(a.grade_execute)
{
    *this=a;
}

Form& Form::operator=(const Form& a)
{
    *const_cast<std::string*>(&this->name)=a.name;
    *const_cast<int*>(&grade_sign)=a.grade_sign;
    *const_cast<int*>(&grade_execute)=a.grade_execute;
    is_signed = a.isSigned();
    return *this;
}

const std::string& Form::getName() const
{
    return name;
}

bool Form::isSigned() const
{
    return is_signed;
}

int Form::getGradeSign() const
{
    return grade_sign;
}

int Form::getGradeExecute() const
{
    return grade_execute;
}

const char * Form::GradeTooHighException::what(void) const throw()
{
	return "Grade too high\n";
}

const char * Form::GradeTooLowException::what(void) const throw()
{
	return "Grade too low\n";
}

void Form::beSigned(const Bureaucrat& a)
{
    if(this->grade_sign < a.getGrade())
        throw GradeTooLowException();
    is_signed=1;
}


std::ostream& operator<<(std::ostream& os, const Form& a)
{
    os << a.getName() << ", signed " << a.isSigned() << ", signGrade " << a.getGradeSign() << ", execGrade " << a.getGradeExecute() << '\n' << std::flush;
    return os;
}