/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:53:40 by tjo               #+#    #+#             */
/*   Updated: 2023/01/13 21:51:53 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"
#include<iostream>

HumanA::HumanA(std::string name, Weapon& weapon)
{
    this->name=name;
    this->weapon=&weapon;
}

void HumanA::attack(void)
{
    std::cout << name << " attacks with their " << weapon->getType() << '\n' << std::flush;
}
