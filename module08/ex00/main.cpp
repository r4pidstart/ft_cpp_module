/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 04:37:03 by tjo               #+#    #+#             */
/*   Updated: 2023/02/08 04:59:17 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"easyfind.hpp"
#include<vector>
#include<set>
#include<iostream>

int main(void)
{
    std::vector<int> arr1(10);
    arr1[7]=10;
    std::cout << std::distance(arr1.begin(), easyfind(arr1, 10)) << '\n';
    
    std::set<int> se;
    se.insert(1);
    se.insert(3);
    se.insert(2);
    se.insert(4);
    std::cout << std::distance(se.begin(), easyfind(se, 2)) << '\n';
}