/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 04:03:20 by tjo               #+#    #+#             */
/*   Updated: 2023/02/08 05:08:31 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<class T>
Array<T>::Array() : siz(0)
{
    this->arr=new T[0];
}

template<class T>
Array<T>::Array(unsigned int siz) : siz(siz)
{
    this->arr=new T[siz];
    for(unsigned int i=0; i<siz; i++)
        this->arr[i]=T();
}

template<class T>
Array<T>::~Array()
{
    delete[] arr;
}

template<class T>
Array<T>::Array(const Array &a)
{
    this->arr=0;
    *this=a;
}

template<class T>
Array<T>& Array<T>::operator=(const Array<T> &a)
{
    if(this == &a) 
        return *this;
    if(this->arr)
        delete[] arr;
    this->arr=new T[a.siz];
    this->siz=a.siz;
    for(unsigned int i=0; i<this->siz; i++)
        this->arr[i]=a.arr[i];
    return *this;
}

template<class T>
T& Array<T>::operator[](unsigned int a)
{
    if(this->siz <= a)
        throw std::out_of_range("out of range");
    return this->arr[a];
}

template<class T>
unsigned int Array<T>::size(void) const
{
    return this->siz;
}