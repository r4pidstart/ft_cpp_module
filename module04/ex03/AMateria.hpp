/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 02:23:10 by tjo               #+#    #+#             */
/*   Updated: 2023/01/16 03:23:44 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<string>

class ICharacter;

class AMateria
{
protected:
    std::string type;
public:
    AMateria();
    AMateria(const AMateria&);
    AMateria& operator=(const AMateria&);
    AMateria(std::string const & type);
    std::string const & getType() const; //Returns the materia type
    virtual ~AMateria() {}
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target) = 0;
};
