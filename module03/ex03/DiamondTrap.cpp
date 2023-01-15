/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 12:21:53 by tjo               #+#    #+#             */
/*   Updated: 2023/01/15 16:29:26 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"DiamondTrap.hpp"
#include<string>
#include<iostream>

DiamondTrap::DiamondTrap() : ClapTrap()
{
    hit=100; // FragTrap
    energy=50; // ScavTrap
    damage=30; // FragTrap
    std::cout << "DiamondTrap " << DiamondTrap::name << " default constructor called\n" << std::flush;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << DiamondTrap::name << " destructor called\n" << std::flush;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name+"_clap_name")
{
    DiamondTrap::name=name;
    hit=100; // FragTrap
    energy=50; // ScavTrap
    damage=30; // FragTrap
    std::cout << "DiamondTrap " << DiamondTrap::name << " constructor with string called\n" << std::flush;
}

DiamondTrap::DiamondTrap(const DiamondTrap& a) : ClapTrap(a), FragTrap(a), ScavTrap(a)
{
    *this=a;
    std::cout << "DiamondTrap " << name << " copy constructor called\n" << std::flush;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& a)
{
    DiamondTrap::name=a.DiamondTrap::name;
    ClapTrap::name=a.ClapTrap::name;
    hit=a.hit, energy=a.energy, damage=a.damage;
    std::cout << "DiamondTrap " << name << " copy assignment operator called\n" << std::flush;
    return *this;
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "My name is " << DiamondTrap::name << " and my parent class's name is " << ClapTrap::name << ".\n" << std::flush;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::myStats(void)
{
    std::cout << "Hit :" << hit << "\nEnergy :" << energy << "\nAttack damage :" << damage << "\n" << std::flush;
}