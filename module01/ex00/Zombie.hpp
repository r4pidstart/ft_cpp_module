/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:38:18 by tjo               #+#    #+#             */
/*   Updated: 2023/01/13 21:42:17 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<string>

class Zombie
{
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        // Zombie(const Zombie &)
        // Zombie &operator=(const Zombie &)
        void announce(void);
    private:
        std::string name;
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);
