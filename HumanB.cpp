/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:53:40 by tjo               #+#    #+#             */
/*   Updated: 2023/01/12 19:01:25 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"
#include<iostream>

HumanB::HumanB(std::string name)
{
    this->name=name;
    this->weapon=0;
}

void HumanB::attack(void)
{
    std::cout << name << " attacks with their " << weapon->getType() << '\n' << std::flush;
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon=&weapon;
}
