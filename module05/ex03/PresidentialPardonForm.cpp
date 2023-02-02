/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 05:01:55 by tjo               #+#    #+#             */
/*   Updated: 2023/02/03 05:44:48 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PresidentialPardonForm.hpp"
#include"Bureaucrat.hpp"
#include"AForm.hpp"
#include <cstdlib>
#include <iostream>


PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : Form(target, 25, 5)
{
    
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& a) : Form(a.getName(), 25, 5)
{
    *this=a;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &a)
{
    return (*dynamic_cast<PresidentialPardonForm*>(&Form::operator=(a)));
}

const char * PresidentialPardonForm::CannotExecuteException::what(void) const throw()
{
	return "Cannot execute with this executor.\n";
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if(getGradeSign() < executor.getGrade() || getGradeExecute() < executor.getGrade())
        throw CannotExecuteException();
        
    std::cout << getName() << " has been pardoned by Zaphod Beeblebrox.\n" << std::flush;
}
