/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 09:03:58 by tjo               #+#    #+#             */
/*   Updated: 2023/01/15 10:48:44 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FragTrap.hpp"
#include<iostream>
#include<string>

FragTrap::FragTrap() : ClapTrap()
{
    hit=100, energy=100, damage=30;
    std::cout << "FragTrap " << name << " default constructor called\n" << std::flush;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " destructor called\n" << std::flush;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    hit=100, energy=100, damage=30;
    std::cout << "FragTrap " << name << " constructor with string called\n" << std::flush;
}

FragTrap::FragTrap(const FragTrap& a) : ClapTrap(a)
{
    *this=a;
    std::cout << "FragTrap " << name << " copy constructor called\n" << std::flush;
}

FragTrap& FragTrap::operator=(const FragTrap& a)
{
    name=a.name;
    hit=a.hit, energy=a.energy, damage=a.damage;
    std::cout << "FragTrap " << name << " copy assignment operator called\n" << std::flush;
    return *this;
}

void FragTrap::attack(const std::string& target)
{
    if(!hit || !energy)
        std::cout << "FragTrap " << name << " cannot do anything\n";
    else
        std::cout << "FragTrap" << name << " attacks " << target << " causing " << damage << " damage\n"; 
    energy--;
}

void FragTrap::highFiveGuys(void)
{
    std::cout << "FragTrap " << name << " : highfive!\n" << std::flush; 
}
