/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 00:29:09 by tjo               #+#    #+#             */
/*   Updated: 2023/01/14 00:36:26 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"
#include<iostream>

Fixed::Fixed()
{
    std::cout << "Default constructor called\n" << std::flush;
    integer=0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n" << std::flush;
}

Fixed::Fixed(const Fixed &a)
{
    std::cout << "Copy constructor called\n" << std::flush;
    *this=a;
}

Fixed& Fixed::operator=(const Fixed &a)
{
    std::cout << "Copy assignment operator called\n" << std::flush;
    integer=a.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called\n" << std::flush;
    return integer;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called\n" << std::flush;
    integer=raw;
}
