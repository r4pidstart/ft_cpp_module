/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 01:27:31 by tjo               #+#    #+#             */
/*   Updated: 2023/01/14 01:52:00 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Point.hpp"

Point::Point()
{
    x=Fixed(0), y=Fixed(0);
}

Point::~Point()
{

}

Point::Point(float x, float y)
{
    this->x=Fixed(x), this->y=Fixed(y);
}

Point::Point(const Point& a)
{
    *this=a;
}

Point& Point::operator=(const Point& a)
{
    this->x=a.x;
    this->y=a.y;
    return *this;
}

const Fixed& Point::getX(void) const
{
    return x;
}

const Fixed& Point::getY(void) const
{
    return y;
}
