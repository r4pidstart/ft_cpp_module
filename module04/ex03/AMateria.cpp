/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 03:10:37 by tjo               #+#    #+#             */
/*   Updated: 2023/01/16 03:18:30 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AMateria.hpp"
#include<string>

AMateria::AMateria()
{

}

AMateria::AMateria(const AMateria& a)
{
    *this=a;
}

AMateria::AMateria(std::string const & type)
{
    this->type=type;
}

AMateria& AMateria::operator=(const AMateria& a)
{
    type=a.type;
    return *this;
}

std::string const & AMateria::getType() const
{
    return type;
}
