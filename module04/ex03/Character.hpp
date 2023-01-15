/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 02:23:10 by tjo               #+#    #+#             */
/*   Updated: 2023/01/16 03:00:01 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include"ICharacter.hpp"
#include"AMateria.hpp"

class Character : public ICharacter
{
    private:
        AMateria *slot[4]; 
        std::string name;
    public:
        Character();
        ~Character();
        Character(const std::string&);
        Character(const Character&);
        Character& operator=(const Character&);
        std::string const &getName() const;
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter &target);
};
