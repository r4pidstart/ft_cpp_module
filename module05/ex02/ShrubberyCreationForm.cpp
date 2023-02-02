/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 05:01:55 by tjo               #+#    #+#             */
/*   Updated: 2023/02/03 05:41:30 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ShrubberyCreationForm.hpp"
#include"Bureaucrat.hpp"
#include"AForm.hpp"
#include<fstream>
#include<iostream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : Form(target, 145, 137)
{
    
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& a) : Form(a.getName(), 145, 137)
{
    *this=a;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &a)
{
    return (*dynamic_cast<ShrubberyCreationForm*>(&Form::operator=(a)));
}

const char * ShrubberyCreationForm::CannotExecuteException::what(void) const throw()
{
	return "Cannot execute with this executor.\n";
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if(getGradeSign() < executor.getGrade() || getGradeExecute() < executor.getGrade())
        throw CannotExecuteException();

    std::ofstream os((getName()+"_shrubbery").c_str(), std::ios::out);
    if(!os.is_open())
    {
        std::cout << "Failed to open the file.\n" << std::flush;
        return ;
    }
    
    os << "    *\n   /.\\\n  /o..\\\n  /..o\\\n /.o..o\\\n /...o.\\\n/..o....\\\n^^^[_]^^^\n";
    os << "    *\n   /.\\\n  /o..\\\n  /..o\\\n /.o..o\\\n /...o.\\\n/..o....\\\n^^^[_]^^^\n" << std::flush;
    os.close();
}

