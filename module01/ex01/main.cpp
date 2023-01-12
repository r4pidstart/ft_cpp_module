/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:47:18 by tjo               #+#    #+#             */
/*   Updated: 2023/01/12 18:14:59 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"
#include<string>

int main(void)
{
    int n=10;
    Zombie *horde=zombieHorde(n, std::string("name"));
    
    for(int i=0; i<n; i++)
        horde[i].announce();

    delete[] horde;
}
