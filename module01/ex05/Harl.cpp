/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:45:57 by tjo               #+#    #+#             */
/*   Updated: 2023/01/13 23:04:33 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"
#include<string>
#include<iostream>

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n" << std::flush;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::flush;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n" << std::flush;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::flush;
}

void Harl::complain(std::string level)
{
    std::string levels[4]={"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*fp[4])(void)={&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    
    for(int i=0; i<4; i++)
        if(level == levels[i])
        {
            (this->*fp[i])();
            return;
        }
    std::cout << "?\n" << std::flush;
}
