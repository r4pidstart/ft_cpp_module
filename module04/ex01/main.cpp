/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 01:08:04 by tjo               #+#    #+#             */
/*   Updated: 2023/01/16 02:00:16 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>
#include <cstdlib>

int main()
{
    Cat *cat = new Cat();

    cat->assignBrain(10, "TEST10");

    Cat *copycat = new Cat(*cat);
    cat->assignBrain(10, "test10");

    std::cout << cat->getBrain(10) << '\n' << copycat->getBrain(10) << "\n\n" << std::flush;

    delete cat;
    delete copycat;

    std::cout << "\n";
    
    Animal *arr[10];
    for(int i=0; i<10; i++)
    {
        if(i < 10/2)
            arr[i]=new Dog();
        else
            arr[i]=new Cat();
    }

    std::cout << "\n";

    for(int i=0; i<10; i++)
        delete arr[i];

    // system("leaks $PPID");
    return 0;
}
