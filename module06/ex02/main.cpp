/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:11:34 by tjo               #+#    #+#             */
/*   Updated: 2023/02/06 18:18:00 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"A.hpp"
#include"B.hpp"
#include"C.hpp"
#include"Base.hpp"
#include<cstdlib>
#include<ctime>
#include<iostream>

Base * generate(void)
{
    srand(time(NULL));
    int ret=rand()%3;

    if(ret==0)
    {
        std::cout << "generated A\n";
        return new A();
    }
    else if(ret==1)
    {
        std::cout << "generated B\n";
        return new B();
    }
    else
    {
        std::cout << "generated C\n";
        return new C();
    }
}

void identify(Base *p)
{
    if(dynamic_cast<A*>(p))
        std::cout << "identified A\n";
    else if(dynamic_cast<B*>(p))
        std::cout << "identified B\n";
    else if(dynamic_cast<C*>(p))
        std::cout << "identified C\n";
    else
        std::cout << "?\n";
}

void identify(Base &p)
{
    identify(&p);
    // try
    // {
    //     A &a=dynamic_cast<A&>(p);
    //     (void)a;
    //     std::cout << "identified A\n";
    // }
    // catch(...)
    // {
        
    // }
}

int main(void)
{
    Base *test=generate();
    
    identify(test);
    identify(*test);
}