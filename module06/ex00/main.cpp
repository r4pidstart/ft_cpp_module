/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:05:49 by tjo               #+#    #+#             */
/*   Updated: 2023/09/19 17:23:15 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScalarConverter.hpp"
#include<iostream>

int main(int ac, char** av)
{
    if(ac != 2)
        return std::cout << "Wrong argument(s)\n", 1;
    
    std::string target(av[1]);
    ScalarConverter::convert(target);
}
