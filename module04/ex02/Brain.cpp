/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 01:31:22 by tjo               #+#    #+#             */
/*   Updated: 2023/01/16 01:37:29 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Brain.hpp"
#include<string>
#include<iostream>

Brain::Brain()
{
    std::cout << "Brain constructor\n" << std::flush;
    for(int i=0; i<100; i++)
        ideas[i]="";
}

Brain::~Brain()
{
    std::cout << "Brain destructor\n" << std::flush;
}

Brain::Brain(const Brain& a)
{
    std::cout << "Brain copy constructor\n" << std::flush;
    *this=a;
}

Brain& Brain::operator=(const Brain& a)
{
    for(int i=0; i<100; i++)
        this->ideas[i]=a.ideas[i];
    return *this;
}
