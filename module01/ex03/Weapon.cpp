/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:32:39 by tjo               #+#    #+#             */
/*   Updated: 2023/01/13 21:53:14 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"

Weapon::Weapon()
{
    type="unknown";
}

Weapon::Weapon(std::string type)
{
    this->type=type;
}

const std::string& Weapon::getType(void)
{
    return type;
}

void Weapon::setType(std::string s)
{
    type=s;
}
