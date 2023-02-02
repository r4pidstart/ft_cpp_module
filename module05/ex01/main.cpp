/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 04:54:02 by tjo               #+#    #+#             */
/*   Updated: 2023/01/29 05:59:48 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"
#include"Form.hpp"
#include<exception>
#include<iostream>

int main(void)
{
    try
    {
        Form form1=Form(std::string("Form1"), -1, 10);
    }
    catch(std::exception &e)
    {
        std::cout << e.what();
    }

    try
    {
        Form form1=Form(std::string("Form1"), 1, 151);
    }
    catch(std::exception &e)
    {
        std::cout << e.what();
    }

    try
    {
        Bureaucrat name1=Bureaucrat(std::string("name1"), 10);
        std::cout << name1;
        
        Form form1=Form(std::string("Form1"), 1, 50);
        Form form2=Form(std::string("Form2"), 11, 50);

        std::cout << form1 << form2;
        
        name1.signForm(form1);
        name1.signForm(form2);
        
        std::cout << form1 << form2;
        
        form1.beSigned(name1);
    }
    catch(std::exception &e)
    {
        std::cout << e.what();
    }
}
