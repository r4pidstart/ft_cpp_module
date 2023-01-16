/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 09:03:58 by tjo               #+#    #+#             */
/*   Updated: 2023/01/16 17:04:04 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"
#include<iostream>
#include<string>

ScavTrap::ScavTrap() : ClapTrap()
{
    hit=100, energy=50, damage=20;
    std::cout << "ScavTrap " << name << " default constructor called\n" << std::flush;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name << " destructor called\n" << std::flush;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    hit=100, energy=50, damage=20;
    std::cout << "ScavTrap " << name << " constructor with string called\n" << std::flush;
}

ScavTrap::ScavTrap(const ScavTrap& a) : ClapTrap(a)
{
    *this=a;
    std::cout << "ScavTrap " << name << " copy constructor called\n" << std::flush;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& a)
{
    name=a.name;
    hit=a.hit, energy=a.energy, damage=a.damage;
    std::cout << "ScavTrap " << name << " copy assignment operator called\n" << std::flush;
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if(!hit || !energy)
        std::cout << "ScavTrap " << name << " cannot do anything\n";
    else
        std::cout << "ScavTrap " << name << " attacks " << target << " causing " << damage << " damage\n"; 
    energy--;
}

void ScavTrap::guardGate(void)
{
    if(!hit || !energy)
        std::cout << "ScavTrap " << name << " cannot do anything\n";
    std::cout << "ScavTrap " << name << " is now in Gatekeeper mode.\n" << std::flush; 
}
