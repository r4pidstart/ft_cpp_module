/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:15:24 by tjo               #+#    #+#             */
/*   Updated: 2023/01/12 18:21:24 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>

int main(void)
{
    std::string s("HI THIS IS BRAIN");
    
    std::string *stringPTR=&s;
    std::string &stringREF=s;
    
    std::cout << "original address: " << &s << "\n"
        << "stringPTR: " << stringPTR << '\n'
        << "stringREF: " << &stringREF << '\n' << std::flush;
    
    std::cout << "original string: " << s << "\n"
        << "stringPTR: " << *stringPTR << '\n'
        << "stringREF: " << stringREF << '\n' << std::flush;
}
