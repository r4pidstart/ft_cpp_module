/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 01:09:15 by tjo               #+#    #+#             */
/*   Updated: 2023/01/16 01:21:55 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongAnimal.hpp"
#include<string>
#include<iostream>

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "WrongAnimal constructor called\n" << std::flush;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called\n" << std::flush;
}

WrongAnimal::WrongAnimal(const WrongAnimal& a)
{
    *this=a;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& a)
{
    (void)a;
    return *this;
}

std::string WrongAnimal::getType(void) const
{
    return type;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimalWrongAnimal\n" << std::flush;
}
