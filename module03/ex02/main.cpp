/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 09:13:24 by tjo               #+#    #+#             */
/*   Updated: 2023/01/15 15:43:02 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
#include"ScavTrap.hpp"
#include"FragTrap.hpp"

int main(void)
{
    ScavTrap A("A"); // hit:100 energy:50 attack:20
    ClapTrap B("B"); // hit:10 energy:10 attack:0
    FragTrap C("C"); // hit:10 energy:10 attack:0

    A.attack("target1"); // hit:100 energy:49 attack:20
    B.attack("target2"); // hit:10 energy:9 attack:0
    C.attack("target3"); // hit:100 energy:99 attack:30

    A.guardGate();
    C.highFiveGuys();
    
    A.takeDamage(5); // hit:95 energy:49 attack:0
    A.beRepaired(15); // hit:110 energy:48 attack:0
    
    B.takeDamage(5); // hit:5 energy:9 attack:0
    B.beRepaired(15); // hit:20 energy:8 attack:0

    C.beRepaired(500); // hit:600 energy:98 attack:30

    B.takeDamage(20); // hit:0 energy:0 attack:0
    B.attack("target");
    B.beRepaired(100);
}
