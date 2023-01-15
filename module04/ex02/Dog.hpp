/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 01:05:48 by tjo               #+#    #+#             */
/*   Updated: 2023/01/16 01:46:39 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include"Animal.hpp"
#include"Brain.hpp"
#include<string>

class Dog : public Animal
{
    private:
        Brain *brain;
    public:
        Dog();
        ~Dog();
        Dog(const Dog&);
        Dog& operator=(const Dog&);
        void makeSound() const;
        void assignBrain(int, const std::string&);
        std::string getBrain(int);
};
