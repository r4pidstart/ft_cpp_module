/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:47:18 by tjo               #+#    #+#             */
/*   Updated: 2023/01/12 16:51:52 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"
#include<string>

int main(void)
{
    Zombie *tmp=newZombie("name1");
    tmp->announce();
    delete tmp;
    
    randomChump("name2");
}
