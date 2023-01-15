/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 09:33:27 by tjo               #+#    #+#             */
/*   Updated: 2023/01/15 15:34:16 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
#include<string>
#include<iostream>

ClapTrap::ClapTrap()
{
    name="default";
    hit=10, energy=10, damage=0;
    std::cout << "ClapTrap " << name << " default constructor called\n" << std::flush;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " destructor called\n" << std::flush;
}

ClapTrap::ClapTrap(std::string name)
{
    this->name=name;
    hit=10, energy=10, damage=0;
    std::cout << "ClapTrap " << name << " constructor with string called\n" << std::flush;
}

ClapTrap::ClapTrap(const ClapTrap& a)
{
    *this=a;
    std::cout << "ClapTrap " << name << " copy constructor called\n" << std::flush;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& a)
{
    name=a.name;
    hit=a.hit, energy=a.energy, damage=a.damage;
    std::cout << "ClapTrap " << name << " copy assignment operator called\n" << std::flush;
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if(!hit || !energy)
        std::cout << "ClapTrap " << name << " cannot do anything\n";
    else
    {
        std::cout << "ClapTrap " << name << " attacks " << target << " causing " << damage << " damage\n"; 
        energy--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << name << " lost " << amount << " of hit point(s)\n";
    hit=0>(hit-(int)amount) ? 0:hit-(int)amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(!energy || !hit)
        std::cout << "ClapTrap " << name << " cannot do anything\n";
    else
    {
        std::cout << "ClapTrap " << name << " is repaired " << amount << " of hit point(s)\n";
        energy--;
        hit+=amount;
    }
}
