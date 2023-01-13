/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 00:24:51 by tjo               #+#    #+#             */
/*   Updated: 2023/01/14 01:45:11 by tjo              ###   ########.fr       */
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
        
        bool operator>(const Fixed& a) const;
        bool operator<(const Fixed& a) const;
        bool operator>=(const Fixed& a) const;
        bool operator<=(const Fixed& a) const;
        bool operator==(const Fixed& a) const;
        bool operator!=(const Fixed& a) const;
        
        Fixed operator+(const Fixed& a) const;
        Fixed operator-(const Fixed& a) const;
        Fixed operator*(const Fixed& a) const;
        Fixed operator/(const Fixed& a) const;
        
        Fixed& operator--(void);
        Fixed& operator++(void);
        const Fixed operator++(int);
        const Fixed operator--(int);

        static Fixed& min(Fixed& a, Fixed& b);
        static Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);
