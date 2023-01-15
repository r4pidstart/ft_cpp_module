/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 01:05:48 by tjo               #+#    #+#             */
/*   Updated: 2023/01/16 01:25:33 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include"Animal.hpp"
#include<string>

class Cat : public Animal
{
    public:
        Cat();
        ~Cat();
        Cat(const Cat&);
        Cat& operator=(const Cat&);
        void makeSound() const;
};
