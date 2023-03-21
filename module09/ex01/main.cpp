/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:31:40 by tjo               #+#    #+#             */
/*   Updated: 2023/03/21 16:57:52 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<stack>
#include<sstream>
#include<string>

int main(int ac, char **av)
{
    if(ac != 2)
    {
        std::cerr << av[0] << " \"some inverted polish mathmatical expression\"\n";
        return 1;
    }

    std::string args(av[1]);
    std::stringstream ss(args);

    std::string tmp;
    std::stack<double> stk;
    while(std::getline(ss, tmp, ' '))
    {
        if(std::string("+-*/").find(tmp) != std::string::npos)
        {
            if(tmp.size() != 1)
            {
                std::cerr << "Error: unknown operator\n";
                return 1;
            }
            // do some calculation
            if(stk.size() < 2)
            {
                std::cerr << "Error: invalid expression\n";
                return 1;
            }
            double operand2=stk.top(); stk.pop();
            double operand1=stk.top(); stk.pop();
            if(tmp[0] == '+')
                stk.push(operand1+operand2);
            else if(tmp[0] == '-')
                stk.push(operand1-operand2);
            else if(tmp[0] == '*')
                stk.push(operand1*operand2);
            else if(tmp[0] == '/')
                stk.push(operand1/operand2);
        }
        else if(!std::isdigit(tmp[0]))
        {
            std::cerr << "Error: unknown operator\n";
            return 1;
        }
        else if(tmp.size() != 1)
        {
            std::cerr << "Error: arguments always be less than 10\n";
            return 1;
        }
        else
            stk.push(tmp[0]-'0');   
    }

    if(stk.size() != 1)
    {
        std::cerr << "Error: invalid expression\n";
        return 1;
    }
    std::cout << stk.top();
}