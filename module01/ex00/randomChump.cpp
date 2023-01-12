/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:43:23 by tjo               #+#    #+#             */
/*   Updated: 2023/01/12 16:49:49 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"
#include<string>

void randomChump(std::string name)
{
    // Zombie* tmp=newZombie(name);
    // tmp->announce();
    // delete tmp;

    Zombie(name).announce();
}
