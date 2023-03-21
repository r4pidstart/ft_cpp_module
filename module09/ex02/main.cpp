/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:57:58 by tjo               #+#    #+#             */
/*   Updated: 2023/03/21 18:13:22 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>
#include<vector>
#include<deque>
#include<limits>
#include<climits>
#include<sstream>
#include<cstdlib>
#include<sys/time.h>
#include<cmath>
#include"PmergeMe.hpp"

long string_to_integer_32(const std::string& s)
{
    // check whether all chars are digit
    for(size_t i=0; i<s.length(); i++)
    {
        if(s[i] != '-' and s[i] != '+' and !std::isdigit(s[i]))
            return std::numeric_limits<long>::max();
    }
    int tmp=std::atoi(s.c_str());
    if(s.length() > 11 or tmp > std::numeric_limits<int>::max() or tmp < std::numeric_limits<int>::min())
        return std::numeric_limits<long>::max();
    return tmp;
}

int main(int ac, char **av)
{
    if(ac==1)
    {
        std::cout << av[0] << " \"some sequence of integers\"\n";
        return 1;
    }
    
    std::vector<int> arr_vec;
    std::deque<int> arr_deq;

    std::string args;
    for(int i=1; i<ac; i++)
        args+=' '+std::string(av[i]);
    
    // data validation and preprocessing
    std::stringstream ss(args);
    std::string tmp;
    while(ss >> tmp)
    {
        long num=string_to_integer_32(tmp);
        if(num==std::numeric_limits<long>::max())
        {
            std::cerr << "Error: not an integer (" << tmp << ")\n";
            return 1;
        }
        
        arr_vec.push_back(num);
        arr_deq.push_back(num);
    }

    std::cout << "Before: ";
    for(size_t i=0; i<arr_vec.size(); i++)
        std::cout << arr_vec[i] << ' ';
    std::cout << '\n';

    double duration_of_vector=merge_insertion_sort(arr_vec);
    double duration_of_deque=merge_insertion_sort(arr_deq);
    
    std::cout << "After: ";
    for(size_t i=0; i<arr_vec.size(); i++)
        std::cout << arr_vec[i] << ' ';
    std::cout << '\n';

    std::cout << "Time to process a range of " << arr_vec.size() << " elements with std::vector : " << duration_of_vector << " us\n";
    std::cout << "Time to process a range of " << arr_vec.size() << " elements with std::deque : " << duration_of_deque << " us\n";

}