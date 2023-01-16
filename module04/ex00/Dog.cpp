/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 01:09:15 by tjo               #+#    #+#             */
/*   Updated: 2023/01/16 17:37:52 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"
#include<string>
#include<iostream>

Dog::Dog()
{
    type="Dog";
    std::cout << "Dog constructor called\n" << std::flush;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called\n" << std::flush;
}

Dog::Dog(const Dog& a) : Animal(a)
{
    std::cout << "Dog copy constructor called\n" << std::flush;
    *this=a;
}

Dog& Dog::operator=(const Dog& a)
{
    type=a.type;
    return *this;
}

void Dog::makeSound(void) const
{
    std::cout << "DogDog\n" << std::flush;
}
