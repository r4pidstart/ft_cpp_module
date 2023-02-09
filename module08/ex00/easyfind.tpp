/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 05:00:11 by tjo               #+#    #+#             */
/*   Updated: 2023/02/09 16:06:30 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<algorithm>

template<class it>
static it __find(it begin, it end, int target)
{
    for(; begin != end; begin++)
        if(*begin == target)
            break;
    return begin;
}

template<class T>
typename T::iterator easyfind(T& container, int target)
{
    // return std::find(container.begin(), container.end(), target);
    return __find(container.begin(), container.end(), target);
}