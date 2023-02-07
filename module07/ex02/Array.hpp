/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 04:03:24 by tjo               #+#    #+#             */
/*   Updated: 2023/02/08 04:25:35 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<exception>
#include<stdexcept>

template<class T>
class Array
{
    private:
        T *arr;
        unsigned int siz;
    public:
        Array();
        Array(unsigned int);
        ~Array();
        Array(const Array &a);
        Array& operator=(const Array &a);
        T& operator[](unsigned int);
        unsigned int size() const;
};

#include"Array.tpp"