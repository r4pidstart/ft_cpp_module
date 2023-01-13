/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 00:28:21 by tjo               #+#    #+#             */
/*   Updated: 2023/01/14 01:57:17 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
    Point a(0, 10);
    Point b(10, 0);
    Point c(0, 0);
    
    Point p(4, 5.99);
    // https://www.desmos.com/calculator/flcess3qse

    std::cout << (bsp(a, b, c, p) ? "Inside":"Outside") << '\n';
}
