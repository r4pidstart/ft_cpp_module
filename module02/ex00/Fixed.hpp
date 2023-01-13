/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 00:24:51 by tjo               #+#    #+#             */
/*   Updated: 2023/01/14 00:29:02 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Fixed
{
    private:
        int integer;
        static const int FIXED=8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &a);
        Fixed& operator=(const Fixed &a);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};
