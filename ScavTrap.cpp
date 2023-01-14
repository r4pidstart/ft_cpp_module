/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 16:12:38 by tjo               #+#    #+#             */
/*   Updated: 2023/01/14 16:25:52 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"
#include<string>
#include<iostream>

ScavTrap::ScavTrap() : ClapTrap(100, 50, 20)
{
    std::cout << "default ScavTrap constructed\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
    std::cout << "ScavTrap with name constructed\n";
}

void ScavTrap::attack(const std::string& target)
{
    std::cout << "ScavTrap ";
    this->ClapTrap::attack(target);
}