/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 01:31:30 by tjo               #+#    #+#             */
/*   Updated: 2023/01/16 01:34:09 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<string>

class Brain
{
    public:
        std::string ideas[100];
        Brain();
        ~Brain();
        Brain(const Brain&);
        Brain& operator=(const Brain&);
};
