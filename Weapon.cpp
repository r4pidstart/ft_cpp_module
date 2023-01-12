/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:32:39 by tjo               #+#    #+#             */
/*   Updated: 2023/01/12 19:00:20 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"

Weapon::Weapon()
{
    type="unknown";
}

std::string Weapon::getType(void)
{
    return type;
}

void Weapon::setType(std::string s)
{
    type=s;
}
