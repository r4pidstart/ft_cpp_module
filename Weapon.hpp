/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:29:58 by tjo               #+#    #+#             */
/*   Updated: 2023/01/12 19:01:31 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<string>

class Weapon
{
    public:
        Weapon();
        // ~Weapon()
        // Weapon(const Weapon &)
        // Weapon &operator=(const Weapon &)
        std::string getType(void);
        void setType(std::string);
    private:
        std::string type;
};
