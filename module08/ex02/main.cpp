/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 05:28:09 by tjo               #+#    #+#             */
/*   Updated: 2023/02/09 17:40:12 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>
#include <stack>
#include <cstdlib>

int main() {
  {
    // list
    std::list<int> mstack;
    mstack.push_back(5);
    mstack.push_back(17);
    std::cout << mstack.back() << std::endl;
    mstack.pop_back();
    std::cout << mstack.size() << std::endl;
    mstack.push_back(3);
    mstack.push_back(5);
    mstack.push_back(737);
    //[...]
    mstack.push_back(0);
    std::list<int>::iterator it = mstack.begin();
    std::list<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite) {
      std::cout << *it << std::endl;
      ++it;
    }
    std::list<int> s(mstack);
  }

  std::cout << "\n";
  
  {
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite) {
      std::cout << *it << std::endl;
      ++it;
    }
    std::stack<int> s(mstack);
  }

  MutantStack<int> stk;
  stk.push(1);
  stk.push(1);
  stk.push(1);
  stk.push(1);
  stk.push(1);

  MutantStack<int> stkcopied(stk);
  MutantStack<int> stkcopy_assigned=stk;
  
  while(stk.size())
    std::cout << stk.top(), stk.pop();
    
  std::cout << '\n';
  
  while(stkcopied.size())
    std::cout << stkcopied.top(), stkcopied.pop();

  std::cout << '\n';

  while(stkcopy_assigned.size())
    std::cout << stkcopy_assigned.top(), stkcopy_assigned.pop();
    
  system("leaks $PPID");
}