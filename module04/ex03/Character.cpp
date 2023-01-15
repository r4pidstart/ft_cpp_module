/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 02:49:36 by tjo               #+#    #+#             */
/*   Updated: 2023/01/16 03:26:24 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Character.hpp"
#include<string>

Character::Character()
{
    for(int i=0; i<4; i++)
        slot[i]=0;
}

Character::Character(const std::string& name) : name(name)
{
    for(int i=0; i<4; i++)
        slot[i]=0;
}

Character::Character(const Character& a) : ICharacter(a)
{
    *this=a;
}

Character::~Character()
{
    
}

Character& Character::operator=(const Character& a)
{
    name=a.name;
    for(int i=0; i<4; i++)
        slot[i]=a.slot[i];
    return *this;
}

std::string const &Character::getName() const
{
    return name;
}

void Character::equip(AMateria *m)
{
    if(!m)
        return;
    for(int i=0; i<4; i++)
        if(slot[i] == 0)
        {
            slot[i]=m;
            return;
        }
}

void Character::unequip(int idx)
{
    if(0<=idx and idx<4)
        slot[idx]=0;
}

void Character::use(int idx, ICharacter &target)
{
    if(0<=idx and idx<4 and slot[idx])
        slot[idx]->use(target);
}

