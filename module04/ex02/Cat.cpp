/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 01:09:15 by tjo               #+#    #+#             */
/*   Updated: 2023/01/17 04:18:16 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"
#include<string>
#include<iostream>

Cat::Cat()
{
    type="Cat";
    std::cout << "Cat constructor called\n" << std::flush;
    brain=new Brain();
}

Cat::~Cat()
{
    std::cout << "Cat destructor called\n" << std::flush;
    delete brain;
}

Cat::Cat(const Cat& a) : Animal(a)
{
    std::cout << "Cat copy constructor called\n" << std::flush;
    brain=new Brain();
    *this=a;
}

Cat& Cat::operator=(const Cat& a)
{
    type=a.type;
    *brain=*a.brain;
    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << "CatCat\n" << std::flush;
}

void Cat::assignBrain(int n, const std::string& target)
{
    if(0<=n and n<100)
        brain->ideas[n]=target;
}

std::string Cat::getBrain(int n)
{
    if(0<=n and n<100)
        return brain->ideas[n]; 
    return "";
}
