/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 04:54:02 by tjo               #+#    #+#             */
/*   Updated: 2023/01/29 05:23:50 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"
#include<exception>
#include<iostream>

int main(void)
{
    try
    {
        Bureaucrat name1=Bureaucrat(std::string("name1"), 0);
        std::cout << name1;
    }
    catch(std::exception &e)
    {
        std::cout << e.what();
    }
    
    try
    {
        Bureaucrat name1=Bureaucrat(std::string("name1"), 10);
        std::cout << name1;
    }
    catch(std::exception &e)
    {
        std::cout << e.what();
    }

    try
    {
        Bureaucrat name1=Bureaucrat(std::string("name1"), 150);
        std::cout << name1;
        name1.decrementGrade();
    }
    catch(std::exception &e)
    {
        std::cout << e.what();   
    }
}
