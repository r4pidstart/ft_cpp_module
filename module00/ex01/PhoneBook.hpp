/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 01:40:56 by tjo               #+#    #+#             */
/*   Updated: 2023/01/11 01:43:08 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include"Contact.hpp"

class PhoneBook
{
    public:
        PhoneBook();
        // ~PhoneBook()
        // PhoneBook(const PhoneBook &)
        // PhoneBook &operator=(const PhoneBook &)
        int add(void);
        int search(void);
    private:
        int last_idx;
        Contact contacts[8];
};
