/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 01:08:04 by tjo               #+#    #+#             */
/*   Updated: 2023/01/16 02:03:21 by tjo              ###   ########.fr       */
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

    delete copycat;
    delete cat;

    std::cout << "\n";

    Animal *dog = new Dog();
    dog->makeSound();
    delete dog;

    std::cout << "\n";

    // Animal *animal = new Animal();

    return 0;
}
