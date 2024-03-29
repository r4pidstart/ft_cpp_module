/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:01:34 by tjo               #+#    #+#             */
/*   Updated: 2023/09/19 18:08:05 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>
#include"Serializer.hpp"
#include"Data.hpp"

int main(void)
{
    Data* d=new Data();
    d->data=std::string("this is test string.\n");

    uintptr_t serialized=Serializer::serialize(d);
    Data* deserialized=Serializer::deserialize(serialized);

    std::cout << d << " " << deserialized << "\n";
    std::cout << d->data << deserialized->data;
}