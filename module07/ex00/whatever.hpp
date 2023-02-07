/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 03:35:15 by tjo               #+#    #+#             */
/*   Updated: 2023/02/08 03:40:35 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<class T>
void swap(T& a, T& b)
{
    T tmp=a;
    a=b;
    b=tmp;
}

template<class T>
T& min(T& a, T& b)
{
    return a<b ? a:b;
}

template<class T>
T& max(T& a, T& b)
{
    return a>b ? a:b;
}