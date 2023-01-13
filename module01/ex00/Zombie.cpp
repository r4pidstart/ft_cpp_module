/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:40:15 by tjo               #+#    #+#             */
/*   Updated: 2023/01/13 21:43:12 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"
#include<string>
#include<iostream>

Zombie::Zombie()
{
    name="unknown";
    std::cout << name << " is allocated\n" << std::flush;
}

Zombie::~Zombie()
{
    std::cout << name << " is destructed\n" << std::flush;
}

Zombie::Zombie(std::string name)
{
    this->name=name;
    std::cout << name << " is allocated\n" << std::flush;
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n" << std::flush;
}
