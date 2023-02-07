/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 04:02:07 by tjo               #+#    #+#             */
/*   Updated: 2023/02/08 04:35:18 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Array.hpp"
#include<exception>
#include<iostream>

int main(void)
{
    {
        Array<int> arr(5);
        for(int i=0; i<5; i++)
            std::cout << arr[i] << ' ';
        std::cout << '\n';

        Array<int> copytest(arr);
        arr[3]=1;
        arr[4]=2;
        
        for(int i=0; i<5; i++)
            std::cout << arr[i] << ' ';
        std::cout << '\n';

        for(int i=0; i<5; i++)
            std::cout << copytest[i] << ' ';
        std::cout << '\n';

        try
        {
            arr[6];
        }
        catch(std::exception& e)
        {
            std::cout << e.what() << std::flush;
        }
    }
    // system("leaks $PPID");
}