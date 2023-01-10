/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 01:44:16 by tjo               #+#    #+#             */
/*   Updated: 2023/01/11 01:45:51 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"

int PhoneBook::add(void)
{
    Contact &target=contacts[last_idx];

    do
    {
        std::cout << "First name: " << std::flush;
        std::getline(std::cin, target.first_name);
    }
    while(!target.first_name.size());
    
    do
    {
        std::cout << "Last name: " << std::flush;
        std::getline(std::cin, target.last_name);
    }
    while(!target.last_name.size());

    do
    {
        std::cout << "Nickname: " << std::flush;
        std::getline(std::cin, target.nickname);
    }
    while(!target.nickname.size());

    do
    {
        std::cout << "Darkest secret: " << std::flush;
        std::getline(std::cin, target.darkest_secret);
    }
    while(!target.darkest_secret.size());
    
    last_idx=(last_idx+1)%SIZ;
    return 0;
}

int PhoneBook::search(void)
{   
    if(contacts[0].first_name == "")
    {
        std::cout << "Phonebook is empty.\n" << std::flush;
        return 0;
    }
        
    // display the saved contracts as a list of 4 columns
    std::cout << '|' << std::setw(10) << "Index" << '|'
        << std::setw(10) << "First name" << '|'
        << std::setw(10) << "Lase name" << '|'
        << std::setw(10) << "Nickname" << "|\n" << std::flush;
    
    for(int i=0; i<SIZ; i++)
    {
        Contact &target=contacts[i];
        if(target.first_name != "")
            std::cout << '|' << std::setw(10) << i << '|'
                << std::setw(10) << (target.first_name.size() > 10 ? target.first_name.substr(0, 9)+'.' : target.first_name) << '|'
                << std::setw(10) << (target.last_name.size() > 10 ? target.last_name.substr(0, 9)+'.' : target.last_name) << '|'
                << std::setw(10) << (target.nickname.size() > 10 ? target.nickname.substr(0, 9)+'.' : target.nickname) << "|\n" << std::flush;
    }
    
    // prompt the user again for the idx of the entry to display
    int target_idx=-1;
    do
    {
        std::cout << "-- idx \n>> " << std::flush;
        std::string tmp;
        std::getline(std::cin, tmp);
        if(tmp.size() == 1)
        {
            int tmp_idx=tmp[0]-'0';
            if(0<=tmp_idx and tmp_idx<8 and contacts[tmp_idx].first_name != "")
            {
                target_idx=tmp_idx;
                break;
            }
        }
    } while (true);

    Contact &target=contacts[target_idx];
    std::cout << "contacts[" << target_idx << "]\n"
        << "First name: " << target.first_name << '\n'
        << "Second name: " << target.last_name << '\n'
        << "Nickname: " << target.nickname << '\n'
        << "Darkest secret: " << target.darkest_secret << '\n' << std::flush;
        
    return 0;
}

PhoneBook::PhoneBook(void)
{
    this->last_idx=0;
}
