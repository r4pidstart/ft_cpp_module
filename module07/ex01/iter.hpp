/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 03:35:15 by tjo               #+#    #+#             */
/*   Updated: 2023/02/08 04:11:50 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<cstdlib>
#include<iostream>

template<class T>
void iter(T *arrptr, size_t len, void (*funcptr)(T&))
{
    for(size_t i=0; i<len; i++)
        funcptr(arrptr[i]);
}