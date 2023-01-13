/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:50:38 by tjo               #+#    #+#             */
/*   Updated: 2023/01/13 21:53:40 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include"Weapon.hpp"
#include<string>

class HumanB
{
    public:
        HumanB(std::string);
        // ~HumanB()
        // HumanB(const HumanB &)
        // HumanB &operator=(const HumanB &)
        void attack(void);
        void setWeapon(Weapon&);
    private:
        Weapon *weapon;
        std::string name;
};
