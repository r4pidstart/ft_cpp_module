/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 05:01:39 by tjo               #+#    #+#             */
/*   Updated: 2023/02/11 23:46:50 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Span.hpp"
#include<exception>
#include<iostream>
#include<iterator>
#include<vector>

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    

    Span test(100);
    try
    {
        test.shortestSpan();
    }
    catch(std::exception& a)
    {
        std::cout << a.what();
    }

    try
    {
        test.longestSpan();
    }
    catch(std::exception& a)
    {
        std::cout << a.what();
    }
    
    for(int i=0; i<100; i++)
        test.addNumber(0);

    try
    {
        test.addNumber(1);
    }
    catch(std::exception& a)
    {
        std::cout << a.what();
    }

    try
    {
        test.shortestSpan();
    }
    catch(std::exception& a)
    {
        std::cout << a.what();
    }

    try
    {
        test.longestSpan();
    }
    catch(std::exception& a)
    {
        std::cout << a.what();
    }

    Span test2(100);
    std::vector<int> vec(49, 3);
    vec.push_back(1);
    test2.addNumber(vec.begin(), vec.end());
    std::cout << test2.shortestSpan() << ' ' << test2.longestSpan() << '\n';
    test2.addNumber(vec.begin(), vec.end());

    try {
    test2.addNumber(vec.begin(), vec.begin()+1);
    } catch (std::exception &e) {
        std::cout << e.what();
    }
}