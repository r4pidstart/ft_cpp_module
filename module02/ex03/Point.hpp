/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 01:24:59 by tjo               #+#    #+#             */
/*   Updated: 2023/01/14 01:49:47 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include"Fixed.hpp"

class Point
{
    private:
        Fixed x,y;
    public:
        Point();
        ~Point();
        Point(float x, float y);
        Point(const Point& a);
        Point& operator=(const Point& a);

        const Fixed& getX(void) const;
        const Fixed& getY(void) const;
};
