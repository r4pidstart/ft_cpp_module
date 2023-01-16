/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 01:09:15 by tjo               #+#    #+#             */
/*   Updated: 2023/01/16 17:36:46 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"
#include<string>
#include<iostream>

Animal::Animal() : type("animal")
{
    std::cout << "Animal constructor called\n" << std::flush;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called\n" << std::flush;
}

Animal::Animal(const Animal& a)
{
    std::cout << "Animal copy constructor called\n" << std::flush;
    *this=a;
}

Animal& Animal::operator=(const Animal& a)
{
    type=a.type;
    return *this;
}

std::string Animal::getType(void) const
{
    return type;
}

void Animal::makeSound(void) const
{
    std::cout << "AnimalAnimal\n" << std::flush;
}
