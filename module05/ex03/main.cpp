/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 04:54:02 by tjo               #+#    #+#             */
/*   Updated: 2023/02/03 06:12:37 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"
#include"AForm.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include<exception>
#include<iostream>

int main(void)
{
    Intern intern=Intern();
    
    Form *presidential=intern.makeForm("presidential", "presidential");
    Form *robotomy=intern.makeForm("robotomy", "robotomy");
    Form *shrubbery=intern.makeForm("shrubbery", "shrubbery");
    
    Bureaucrat test("test", 50);

    try
    {
        presidential->execute(test);
        test.executeForm(*presidential);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::flush;
    }

    try
    {
        robotomy->execute(test);
        test.executeForm(*robotomy);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::flush;
    }

    try
    {
        shrubbery->execute(test);
        test.executeForm(*shrubbery);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::flush;
    }

    std::cout << '\n';
    
    Bureaucrat test2("test2", 1);
    test2.executeForm(*presidential);
    test2.executeForm(*robotomy);
    test2.executeForm(*shrubbery);

    try
    {
        intern.makeForm("test", "test");
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::flush;
    }
}
