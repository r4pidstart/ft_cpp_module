/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 02:33:29 by tjo               #+#    #+#             */
/*   Updated: 2023/01/16 03:16:17 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Ice.hpp"
#include"AMateria.hpp"
#include<iostream>

Ice::Ice() : AMateria("ice")
{

}

Ice::Ice(const Ice& a) : AMateria(a)
{
    *this=a;
}

Ice::~Ice()
{
    
}

Ice& Ice::operator=(const Ice& a)
{
    type=a.type;
    return *this;
}

AMateria *Ice::clone(void) const
{
    return (new Ice());
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *\n" << std::flush;
}
