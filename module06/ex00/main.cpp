/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:05:49 by tjo               #+#    #+#             */
/*   Updated: 2023/02/06 19:51:33 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<cctype>
#include<cstdlib>
#include<limits>

int check_literals(const std::string& target)
{
    if(target == "-inf" or target == "-inff")
    {
        std::cout 
            << "char: impossible\n"
            << "int: impossible\n"
            << "float: -inff\n"
            << "double: -inf\n" << std::flush;
        return 1;
    }
    else if(target == "+inf" or target == "+inff")
    {
        std::cout 
            << "char: impossible\n"
            << "int: impossible\n"
            << "float: nanf\n"
            << "double: nan\n" << std::flush;
        return 1;
    }
    else if(target == "nan" or target == "nanf")
    {
        std::cout 
            << "char: impossible\n"
            << "int: impossible\n"
            << "float: -inff\n"
            << "double: -inf\n" << std::flush;
        return 1;
    }
    return 0;
}

int check_target(std::string& target)
{     
    // multiple point
    int point_cnt=0;
    for(size_t i=0; i<target.size(); i++)
        if(target[i]=='.') 
            point_cnt+=1 + (i==0 or i==target.size()-1);
    if(point_cnt > 1)
        return 1;
    
    // other character on first character
    if(!std::isdigit(target[0]) and target[0] != '-' and target[0] != '+')
        return 1;
    
    // other chracter on last character
    if(!std::isdigit(target[target.size()-1]) and target[target.size()-1] != 'f')
        return 1;
    
    for(size_t i=1; i+1<target.size(); i++)
        if(!std::isdigit(target[i]) and target[i]!='.')
            return 1;
    
    return 0;
}

int main(int ac, char** av)
{
    if(ac != 2)
        return std::cout << "Wrong argument(s)\n", 1;
    
    std::string target(av[1]);
    
    // check only one character
    int char_flag=0;
    if(target.size()==1)
        target="'"+target+"'";
    if(target.size()==3 and target[0]=='\'' and target[2]=='\'')
        char_flag=1;
        
    if(!char_flag && (check_literals(target) || check_target(target)))
        return std::cout << "Wrong argument(s)\n", 1;
    
    
    double tmp;
    if(char_flag) tmp=static_cast<int>(target[1]);
    else tmp=std::atof(target.c_str());

    char ch=static_cast<char>(tmp);
    int in=static_cast<int>(tmp);
    float fl=static_cast<float>(tmp);
    double du=static_cast<double>(tmp);
    
    // char
    if(-std::numeric_limits<char>::max()-1 <= du
        and du <= std::numeric_limits<char>::max())
    {
        if(std::isprint(ch))
            std::cout << "char: '" << ch << "'\n";
        else
            std::cout << "char: Non displayable\n";
    }
    else
    {
        std::cout << "char: impossible\n";
    }

    // int
    if(-std::numeric_limits<int>::max()-1 <= du
        and du <= std::numeric_limits<int>::max())
    {
        std::cout << "int: " << in << "\n";
    }
    else
    {
        std::cout << "int: impossible\n";
    }

    // float
    if(-std::numeric_limits<float>::max() <= du
        and du <= std::numeric_limits<float>::max())
    {
        std::cout << "float: " << fl << "f\n";
    }
    else
    {
        std::cout << "float: impossible\n";
    }
    
    // double
    if(-std::numeric_limits<double>::max() <= du
        and du <= std::numeric_limits<double>::max())
    {
        std::cout << "double: " << du << "\n";
    }
    else
    {
        std::cout << "double: impossible\n";
    }
}