/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 21:57:54 by tjo               #+#    #+#             */
/*   Updated: 2023/01/13 23:18:15 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<fstream>
#include<string>

int main(int ac, char **av)
{
    if(ac != 4)
    {
        std::cout << av[0] << " <filename> <s1> <s2>\n" << std::flush;
        return 0;
    }
    
    std::ifstream is(av[1], std::ios::in);
    if(!is.is_open())
    {
        std::cout << "Failed to open the file.\n" << std::flush;
        return 0;
    }
    std::ofstream os((std::string(av[1])+".replace").c_str(), std::ios::out);
    if(!os.is_open())
    {
        std::cout << "Failed to open the file.\n" << std::flush;
        is.close();
        return 0;
    }
    
    std::string from=av[2], to=av[3];
    
    for(std::string tmp; std::getline(is, tmp);)
    {
        size_t prev=0, now=0;
        while (true)
        {
            now = tmp.find(av[2], prev);
            os << tmp.substr(prev, now-prev);
            if(now == std::string::npos)
                break;
            os << to;
            prev=now+from.size();
        }
        os << '\n';
    }
    
    is.close();
    os.close();
}
