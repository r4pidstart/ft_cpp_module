/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 01:09:15 by tjo               #+#    #+#             */
/*   Updated: 2023/01/16 17:37:46 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"
#include<string>
#include<iostream>

Cat::Cat()
{
    type="Cat";
    std::cout << "Cat constructor called\n" << std::flush;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called\n" << std::flush;
}

Cat::Cat(const Cat& a) : Animal(a)
{
    std::cout << "Cat copy constructor called\n" << std::flush;
    *this=a;
}

Cat& Cat::operator=(const Cat& a)
{
    type=a.type;
    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << "CatCat\n" << std::flush;
}
