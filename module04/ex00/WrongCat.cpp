/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 01:09:15 by tjo               #+#    #+#             */
/*   Updated: 2023/01/16 01:22:00 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongCat.hpp"
#include<string>
#include<iostream>

WrongCat::WrongCat()
{
    type="WrongCat";
    std::cout << "WrongCat constructor called\n" << std::flush;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called\n" << std::flush;
}

WrongCat::WrongCat(const WrongCat& a) : WrongAnimal(a)
{
    *this=a;
}

WrongCat& WrongCat::operator=(const WrongCat& a)
{
    type=a.type;
    return *this;
}

void WrongCat::makeSound(void) const
{
    std::cout << "WrongCatWrongCat\n" << std::flush;
}
