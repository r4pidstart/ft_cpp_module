/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 03:35:31 by tjo               #+#    #+#             */
/*   Updated: 2023/02/08 04:02:55 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<ostream>
#include<string>
#include"iter.hpp"

struct test
{
    std::string str;
    test(const char* s) : str(s) {} 
};

std::ostream& operator<<(std::ostream& os, const test& a)
{
    os << a.str;
    return os;
}

template<class T>
void print(T& a)
{
    std::cout << a << '\n' << std::flush;    
}

template<class T>
void testfunc(T& a)
{
    a=T();
}

int main(void)
{
    int arr1[5]={1,2,3,4,5};
    iter(arr1, static_cast<size_t>(5), print<int>);

    test arr2[5]={"a", "b", "c", "d", "e"};
    iter(arr2, static_cast<size_t>(5), print<test>);

    iter(arr1, static_cast<size_t>(5), testfunc<int>);
    iter(arr1, static_cast<size_t>(5), print<int>);
}