/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 00:24:51 by tjo               #+#    #+#             */
/*   Updated: 2023/01/14 00:57:07 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>

class Fixed
{
    private:
        int integer;
        static const int FIXED=8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const int val);
        Fixed(const float val);
        Fixed(const Fixed &a);
        Fixed& operator=(const Fixed &a);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);
