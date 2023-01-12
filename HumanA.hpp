/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:50:38 by tjo               #+#    #+#             */
/*   Updated: 2023/01/12 19:01:28 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include"Weapon.hpp"
#include<string>

class HumanA
{
    public:
        HumanA(std::string, Weapon&);
        // ~HumanA()
        // HumanA(const HumanA &)
        // HumanA &operator=(const HumanA &)
        void attack(void);
    private:
        Weapon *weapon;
        std::string name;
}
