/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 03:02:37 by tjo               #+#    #+#             */
/*   Updated: 2023/01/16 03:24:20 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"MateriaSource.hpp"
#include<string>

MateriaSource::MateriaSource()
{
    for(int i=0; i<4; i++)
        memory[i]=0;
}

MateriaSource::~MateriaSource()
{

}

MateriaSource::MateriaSource(const MateriaSource& a) : IMateriaSource(a)
{
    *this=a;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& a)
{
    for(int i=0; i<4; i++)
        memory[i]=a.memory[i];
    return *this;
}

void MateriaSource::learnMateria(AMateria *mat)
{
    for(int i=0; i<4; i++)
        if(memory[i] == 0)
        {
            memory[i]=mat;
            return;
        }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for(int i=0; i<4; i++)
    {
        if(memory[i] and memory[i]->getType() == type)
            return memory[i];
    }
    return 0;
}
