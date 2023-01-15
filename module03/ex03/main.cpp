/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 09:13:24 by tjo               #+#    #+#             */
/*   Updated: 2023/01/15 16:30:10 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
#include"ScavTrap.hpp"
#include"FragTrap.hpp"
#include"DiamondTrap.hpp"
#include<iostream>

int main(void)
{
    DiamondTrap D("D");
    DiamondTrap E("E");
    D.attack("test");
    E.takeDamage(30);
    D.whoAmI();
    DiamondTrap F(E);
    E.myStats();
    F.myStats();
    F.whoAmI();
    F.beRepaired(50);
}
