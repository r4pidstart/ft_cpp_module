/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 00:29:09 by tjo               #+#    #+#             */
/*   Updated: 2023/01/14 01:59:18 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"
#include<iostream>
#include<cmath>

Fixed::Fixed()
{
    // std::cout << "Default constructor called\n" << std::flush;
    integer=0;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called\n" << std::flush;
}

Fixed::Fixed(int a)
{
    // std::cout << "Int constructor called\n" << std::flush;
    setRawBits(a<<FIXED);
}

Fixed::Fixed(float a)
{
    // std::cout << "Float constructor called\n" << std::flush;
    setRawBits(roundf(a*(1<<FIXED)));
}

Fixed::Fixed(const Fixed &a)
{
    // std::cout << "Copy constructor called\n" << std::flush;
    *this=a;
}

Fixed& Fixed::operator=(const Fixed &a)
{
    // std::cout << "Copy assignment operator called\n" << std::flush;
    integer=a.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called\n" << std::flush;
    return integer;
}

void Fixed::setRawBits(int const raw)
{
    // std::cout << "setRawBits member function called\n" << std::flush;
    integer=raw;
}

float Fixed::toFloat(void) const
{
    return float(integer)/(1<<FIXED);
}

int Fixed::toInt(void) const
{
    return int(integer>>FIXED);
}

std::ostream& operator<<(std::ostream& os, const Fixed& f)
{
    os << f.toFloat();
    return os;
}

bool Fixed::operator>(const Fixed& a) const
{
    return this->toFloat() > a.toFloat();
}

bool Fixed::operator<(const Fixed& a) const
{
    return this->toFloat() < a.toFloat();
}

bool Fixed::operator>=(const Fixed& a) const
{
    return this->toFloat() >= a.toFloat();
}

bool Fixed::operator<=(const Fixed& a) const
{
    return this->toFloat() <= a.toFloat();
}

bool Fixed::operator==(const Fixed& a) const
{
    return this->getRawBits() == a.getRawBits();
}

bool Fixed::operator!=(const Fixed& a) const
{
    return this->getRawBits() != a.getRawBits();
}

Fixed Fixed::operator+(const Fixed& a) const
{
    return Fixed(this->toFloat() + a.toFloat());
}

Fixed Fixed::operator-(const Fixed& a) const
{
    return Fixed(this->toFloat() - a.toFloat());
}

Fixed Fixed::operator*(const Fixed& a) const
{
    return Fixed(this->toFloat() * a.toFloat());
}

Fixed Fixed::operator/(const Fixed& a) const
{
    return Fixed(this->toFloat() / a.toFloat());
}

Fixed& Fixed::operator++(void)
{
    this->integer++;
    return *this;
}

Fixed& Fixed::operator--(void)
{
    this->integer--;
    return *this;
}

const Fixed Fixed::operator++(int)
{
    const Fixed tmp(*this);
    this->integer++;
    return tmp;
}

const Fixed Fixed::operator--(int)
{
    const Fixed tmp(*this);
    this->integer--;
    return tmp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    return a<b ? a:b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    return a>b ? a:b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    return a<b ? a:b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    return a>b ? a:b;
}
