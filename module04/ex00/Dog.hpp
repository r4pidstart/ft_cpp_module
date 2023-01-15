/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 01:05:48 by tjo               #+#    #+#             */
/*   Updated: 2023/01/16 01:25:34 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include"Animal.hpp"
#include<string>

class Dog : public Animal
{
    public:
        Dog();
        ~Dog();
        Dog(const Dog&);
        Dog& operator=(const Dog&);
        void makeSound() const;
};
