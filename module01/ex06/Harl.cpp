/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:45:57 by tjo               #+#    #+#             */
/*   Updated: 2023/01/13 23:22:09 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"
#include<string>
#include<iostream>

void Harl::debug(void)
{
    std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n" << std::flush;
}

void Harl::info(void)
{
    std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::flush;
}

void Harl::warning(void)
{
    std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n" << std::flush;
}

void Harl::error(void)
{
    std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now.\n" << std::flush;
}

void Harl::complain(std::string level)
{
    std::string levels[4]={"DEBUG", "INFO", "WARNING", "ERROR"};
    
    int tmp=-1;
    for(int i=0; i<4; i++)
        if(levels[i] == level)
            tmp=i;

    switch (tmp)
    {
    case 0:
        debug();
        __attribute__ ((fallthrough));
    case 1:
        info();
        __attribute__ ((fallthrough));
    case 2:
        warning();
        __attribute__ ((fallthrough));
    case 3:
        error();
        break;
    
    default:
        std::cout << "[ Probably complaining about insignificant problems ]\n";
        break;
    }
}
