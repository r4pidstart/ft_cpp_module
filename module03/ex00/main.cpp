/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 09:13:24 by tjo               #+#    #+#             */
/*   Updated: 2023/01/15 15:31:47 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

int main(void)
{
    ClapTrap A;
    ClapTrap B("B"); // hit:10 energy:10 attack:0

    A.attack("target");
    B.attack("target"); // hit:10 energy:9 attack:0

    B.takeDamage(5); // hit:5 energy:9 attack:0
    B.beRepaired(15); // hit:20 energy:8 attack:0

    B.takeDamage(20); // hit:0 energy:0 attack:0
    B.attack("target");
    B.beRepaired(100);
}
