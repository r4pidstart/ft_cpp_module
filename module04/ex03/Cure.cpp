/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 02:33:29 by tjo               #+#    #+#             */
/*   Updated: 2023/01/16 03:25:14 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cure.hpp"
#include"AMateria.hpp"
#include<iostream>

Cure::Cure() : AMateria("cure")
{

}

Cure::Cure(const Cure& a) : AMateria(a)
{
    *this=a;
}

Cure::~Cure()
{
    
}

Cure& Cure::operator=(const Cure& a)
{
    type=a.type;
    return *this;
}

AMateria *Cure::clone(void) const
{
    return (new Cure());
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *\n" << std::flush;
}
