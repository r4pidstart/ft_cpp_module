/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 05:48:18 by tjo               #+#    #+#             */
/*   Updated: 2023/02/03 16:50:15 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include<iostream>

Intern::Intern()
{

}

Intern::~Intern()
{

}

Intern::Intern(const Intern &a)
{
    *this=a;
}

Intern& Intern::operator=(const Intern &a)
{
    (void)a;
    return *this;
}

const char* Intern::TargetFormDoNotExist::what() const throw()
{
    return "Target form do not exists.\n";
}

Form* Intern::makePresidential(const std::string& targetName)
{
    return new PresidentialPardonForm(targetName);
}

Form* Intern::makeRobotomy(const std::string& targetName)
{
    return new RobotomyRequestForm(targetName);
}

Form* Intern::makeShrubbery(const std::string& targetName)
{
    return new ShrubberyCreationForm(targetName);
}

Form* Intern::makeForm(const std::string& targetForm, const std::string& targetName)
{
    std::string forms[3]={"presidential", "robotomy", "shrubbery"};
    Form* (Intern::*fp[3])(const std::string& targetName)={&Intern::makePresidential, &Intern::makeRobotomy, &Intern::makeShrubbery};
    
    for(int i=0; i<3; i++)
        if(targetForm == forms[i])
        {
            std::cout << "Intern creates " << targetForm << " " << targetName << '\n' << std::flush;
            return (this->*fp[i])(targetName);
        }
    throw TargetFormDoNotExist();
    return 0;
}

