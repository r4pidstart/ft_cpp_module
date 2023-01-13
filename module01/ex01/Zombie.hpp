/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:38:18 by tjo               #+#    #+#             */
/*   Updated: 2023/01/13 21:45:57 by tjo              ###   ########.fr       */
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
        void setName(std::string name);
    private:
        std::string name;
};

Zombie* zombieHorde(int N, std::string name);
