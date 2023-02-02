/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 04:54:10 by tjo               #+#    #+#             */
/*   Updated: 2023/02/03 06:14:00 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void Bureaucrat::gradeCheck()
{
    if(grade < 1)
        throw GradeTooHighException();
    else if(grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat()
{

}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name), grade(grade)
{
    gradeCheck();
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(const Bureaucrat& a)
{
    *this=a;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& a)
{
    *const_cast<std::string*>(&this->name)=a.name;
    this->grade=a.grade;
    return *this;
}

const std::string& Bureaucrat::getName() const
{
    return name;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

void Bureaucrat::incrementGrade()
{
    grade--;
    gradeCheck();
}

void Bureaucrat::decrementGrade()
{
    grade++;
    gradeCheck();
}

const char * Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return "Grade too high\n";
}

const char * Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return "Grade too low\n";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& a)
{
    os << a.getName() << ", bureaucrat grade " << a.getGrade() << ".\n" << std::flush;
    return os;
}