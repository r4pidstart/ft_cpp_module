/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 09:13:31 by tjo               #+#    #+#             */
/*   Updated: 2023/01/14 18:07:53 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<string>

class ClapTrap
{   
    private:
        std::string name;
        int hit, energy, damage;
    public:
        ClapTrap();
        ~ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(int hit, int energy, int damage);
        ClapTrap(std::string name, int hit, int energy, int damage);
        ClapTrap(const ClapTrap &a);
        ClapTrap& operator=(const ClapTrap &a);
        
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);1};
