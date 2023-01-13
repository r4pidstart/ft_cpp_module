/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:29:58 by tjo               #+#    #+#             */
/*   Updated: 2023/01/13 21:53:00 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<string>

class Weapon
{
    public:
        Weapon();
        Weapon(std::string);
        // ~Weapon()
        // Weapon(const Weapon &)
        // Weapon &operator=(const Weapon &)
        const std::string& getType(void);
        void setType(std::string);
    private:
        std::string type;
};
