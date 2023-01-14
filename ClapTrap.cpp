/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 09:33:27 by tjo               #+#    #+#             */
/*   Updated: 2023/01/14 10:49:32 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
#include<string>
#include<iostream>

ClapTrap::ClapTrap()
{
    std::cout << "constructor called\n";
    hit=10, energy=10, damage=0;
    name="default";   
}

ClapTrap::~ClapTrap()
{
    std::cout << "destructor called\n";
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "constructor with name called\n";
    hit=10, energy=10, damage=0;
    this->name=name;
}

ClapTrap::ClapTrap(const ClapTrap &a)
{
    std::cout << "copy constructor called\n";
    *this=a;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &a)
{
    hit=a.hit, energy=a.energy, damage=a.damage;
    this->name=a.name;
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if(!hit || !energy)
        std::cout << name << " cannot do anything\n";
    else
        std::cout << name << " attacks " << target << " causing " << damage << " damage\n"; 
    energy--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << name << " lost " << amount << " of hit point(s)\n";
    hit=0>(hit-(int)amount) ? 0:hit-(int)amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(!energy || !hit)
        std::cout << name << " cannot do anything\n";
    else
    {
        std::cout << name << " is repaired " << amount << " of hit point(s)\n";
        energy--;
        hit+=amount;
    }
}
