/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 01:08:04 by tjo               #+#    #+#             */
/*   Updated: 2023/01/16 01:28:21 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
    const Animal *meta = new Animal();
    const Animal *i = new Cat();
    const Animal *j = new Dog();
    std::cout << meta->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << '\n';
    meta->makeSound();
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    
    std::cout << '\n';
    delete meta;
    delete i;
    delete j;
    std::cout << '\n';

    const WrongAnimal *test1 = new WrongAnimal();
    const WrongAnimal *test2 = new WrongCat();
    
    std::cout << test1->getType() << " " << std::endl;
    std::cout << test2->getType() << " " << std::endl;
    std::cout << '\n';
    test1->makeSound();
    test2->makeSound();
    std::cout << '\n';
    delete test1;
    delete test2;

    return 0;
}
