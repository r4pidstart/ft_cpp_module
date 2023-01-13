/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 01:30:16 by tjo               #+#    #+#             */
/*   Updated: 2023/01/14 01:50:45 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Point.hpp"

// direction of a-b-c
int ccw(Point const a, Point const b, Point const c)
{
    return ((b.getX()*c.getY() - c.getX()*b.getY()) 
        - (a.getX()*c.getY() - c.getX()*a.getY()) 
        + (a.getX()*b.getY() - a.getY()*b.getX())).toInt();
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    if(ccw(a, b, point) > 0 and ccw(b, c, point) > 0 and ccw(c, a, point) > 0)
        return true;
    if(ccw(a, b, point) < 0 and ccw(b, c, point) < 0 and ccw(c, a, point) < 0)
        return true;
    return false;
}
