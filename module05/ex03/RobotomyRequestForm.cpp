/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 05:01:55 by tjo               #+#    #+#             */
/*   Updated: 2023/02/03 05:44:04 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"RobotomyRequestForm.hpp"
#include"Bureaucrat.hpp"
#include"AForm.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>


RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : Form(target, 72, 45)
{
    
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& a) : Form(a.getName(), 72, 45)
{
    *this=a;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &a)
{
    return (*dynamic_cast<RobotomyRequestForm*>(&Form::operator=(a)));
}

const char * RobotomyRequestForm::CannotExecuteException::what(void) const throw()
{
	return "Cannot execute with this executor.\n";
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if(getGradeSign() < executor.getGrade() || getGradeExecute() < executor.getGrade())
        throw CannotExecuteException();

    std::cout << "* Drilling noise *\n" << std::flush;
    srand(time(NULL));
    if(rand() % 2)
        std::cout << getName() << " is successfully robotomized.\n" << std::flush;
    else
        std::cout << getName() << " is unsuccessfully robotomized.\n" << std::flush;
}
