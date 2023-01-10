/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:35:51 by tjo               #+#    #+#             */
/*   Updated: 2023/01/11 01:44:57 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"
#include<iostream>

int main(void)
{
    PhoneBook pb;
    std::string cmd;
    std::cout << "ADD or SEARCH or EXIT\n>> " << std::flush;
    while (std::getline(std::cin, cmd))
    {
        if (cmd == "ADD")
            pb.add();
        else if (cmd == "SEARCH")
            pb.search();
        else if (cmd == "EXIT")
            break;
        std::cout << "---------------------\n" << std::flush;
        std::cout << "ADD or SEARCH or EXIT\n>> " << std::flush;
    }
}
