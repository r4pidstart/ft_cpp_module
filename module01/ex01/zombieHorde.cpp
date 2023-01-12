/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:53:47 by tjo               #+#    #+#             */
/*   Updated: 2023/01/12 16:57:41 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"
#include<string>

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* ret=new Zombie[N];

    for(int i=0; i<N; i++)
        ret[i]=Zombie(name);
    return ret;
}
