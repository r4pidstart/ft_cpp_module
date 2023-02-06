/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:01:34 by tjo               #+#    #+#             */
/*   Updated: 2023/02/06 17:06:14 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>

struct Data
{
    std::string data;
};

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}

int main(void)
{
    Data* d=new Data();
    d->data=std::string("this is test string.\n");

    uintptr_t serialized=serialize(d);
    Data* deserialized=deserialize(serialized);

    std::cout << d << " " << deserialized << "\n";
    std::cout << d->data << deserialized->data;
}