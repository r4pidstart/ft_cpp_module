/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:36:21 by tjo               #+#    #+#             */
/*   Updated: 2023/01/12 20:35:26 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>
#include<string>
#include<iomanip>

#define SIZ 8

class Contact
{
    public:
        Contact();
        // ~Contact()
        // Contact(const Contact &)
        // Contact &operator=(const Contact &)
    private:
        std::string first_name, last_name, nickname, darkest_secret;
};
