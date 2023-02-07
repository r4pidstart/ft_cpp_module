/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 05:00:11 by tjo               #+#    #+#             */
/*   Updated: 2023/02/08 05:00:17 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

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
    return __find(container.begin(), container.end(), target);
}