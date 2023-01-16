/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 01:09:15 by tjo               #+#    #+#             */
/*   Updated: 2023/01/16 16:09:14 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"
#include<string>
#include<iostream>

Dog::Dog()
{
    type="Dog";
    std::cout << "Dog constructor called\n" << std::flush;
    brain=new Brain();
}

Dog::~Dog()
{
    std::cout << "Dog destructor called\n" << std::flush;
    delete brain;
}

Dog::Dog(const Dog& a) : Animal(a)
{
    std::cout << "Dog copy constructor called\n" << std::flush;
    *this=a;
}

Dog& Dog::operator=(const Dog& a)
{
    brain=new Brain(*a.brain);
    return *this;
}

void Dog::makeSound(void) const
{
    std::cout << "DogDog\n" << std::flush;
}

void Dog::assignBrain(int n, const std::string& target)
{
    if(0<=n and n<100)
        brain->ideas[n]=target;
}

std::string Dog::getBrain(int n)
{
    if(0<=n and n<100)
        return brain->ideas[n]; 
    return "";
}
