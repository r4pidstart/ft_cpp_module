/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 03:35:31 by tjo               #+#    #+#             */
/*   Updated: 2023/02/09 15:40:32 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"whatever.hpp"
#include<iostream>
#include<string>

struct test
{
    std::string str; 
    bool operator<(const test& b)const
    {
        return str<b.str;
    }  
    bool operator>(const test& b)const
    {
        return str>b.str;
    }  
};

int main(void) {
  int a = 2;
  int b = 3;
  ::swap(a, b);
  std::cout << "a = " << a << ", b = " << b << std::endl;
  std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
  std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
  std::string c = "chaine1";
  std::string d = "chaine2";
  ::swap(c, d);
  std::cout << "c = " << c << ", d = " << d << std::endl;
  std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
  std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;

  test test1, test2;
  test1.str="test1", test2.str="test2";
  ::swap(test1, test2);
  std::cout << "test1 = " << test1.str << ", test2 = " << test2.str << std::endl;
  std::cout << "min( test1, test2 ) = " << ::min(test1, test2).str << std::endl;
  std::cout << "max( test1, test2 ) = " << ::max(test1, test2).str << std::endl;
  
  return 0;
}