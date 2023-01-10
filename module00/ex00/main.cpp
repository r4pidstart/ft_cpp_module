/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:19:35 by tjo               #+#    #+#             */
/*   Updated: 2023/01/10 18:41:00 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>
#include<cctype>

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    else
    {
        std::string tmp="";
        for(int i=1; i<ac; i++)
            tmp+=(std::string)av[i];
        for(size_t i=0; i<tmp.size(); i++)
        {
            if(std::islower(tmp[i]))
                tmp[i]=std::toupper(tmp[i]);
        }
        std::cout << tmp << '\n';
    }
}
