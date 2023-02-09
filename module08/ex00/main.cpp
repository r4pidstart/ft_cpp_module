/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 04:37:03 by tjo               #+#    #+#             */
/*   Updated: 2023/02/09 16:14:11 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"easyfind.hpp"
#include<vector>
#include<set>
#include<list>
#include<deque>
#include<iostream>

int main(void)
{
    std::vector<int> arr1(10);
    arr1[7]=10;
    std::cout << std::distance(arr1.begin(), easyfind(arr1, 10)) << '\n';
    std::cout << std::distance(arr1.begin(), easyfind(arr1, 11)) << '\n';
    
    std::vector<bool> arr2(10);
    arr2[4]=1;
    std::cout << std::distance(arr2.begin(), easyfind(arr2, 1)) << '\n';

    std::deque<int> arr3(10);
    arr3[3]=1;
    std::cout << std::distance(arr3.begin(), easyfind(arr3, 1)) << '\n';

    std::list<int> lst;
    lst.push_front(10);
    lst.push_front(30);
    lst.push_front(0);
    lst.push_front(10);
    lst.push_front(0);
    lst.push_front(20);
    std::cout << std::distance(lst.begin(), easyfind(lst, 30)) << '\n';

    std::set<int> se;
    se.insert(1);
    se.insert(3);
    se.insert(2);
    se.insert(4);
    std::cout << std::distance(se.begin(), easyfind(se, 2)) << '\n';
}