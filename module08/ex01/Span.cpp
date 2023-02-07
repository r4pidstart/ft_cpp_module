/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 05:03:38 by tjo               #+#    #+#             */
/*   Updated: 2023/02/08 05:24:24 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Span.hpp"
#include <algorithm>
#include <climits>
#include <exception>
#include <stdexcept>

Span::Span(unsigned int n) : siz(n), idx(0)
{
    this->arr=new int[n];
}

Span::~Span()
{
    delete[] arr;
}

Span::Span(const Span &a)
{
    this->arr=0;
    *this=a;
}

Span& Span::operator=(const Span &a)
{
    if(this == &a) 
        return *this;
    if(this->arr)
        delete[] arr;
    this->arr=new int[a.siz];
    this->siz=a.siz;
    this->idx=a.idx;
    for(unsigned int i=0; i<this->siz; i++)
        this->arr[i]=a.arr[i];
    return *this;
}

void Span::addNumber(int a)
{
    if(this->idx == this->siz)
        throw std::runtime_error("array is full\n");
    this->arr[this->idx++]=a;
}

int Span::longestSpan()
{
    if(this->idx < 2)
        throw std::runtime_error("no numbers stored or only one number stored\n");
        
    int _min=this->arr[0], _max=this->arr[0];
    for(unsigned int i=0; i<idx; i++)
        _min=std::min(_min, this->arr[i]), _max=std::max(_max, this->arr[i]);
    if(_min == _max)
        throw std::runtime_error("no span found\n");
    return _max-_min;
}

int Span::shortestSpan()
{
    if(this->idx < 2)
        throw std::runtime_error("no numbers stored or only one number stored\n");
        
    std::sort(this->arr, this->arr + idx);
    if(this->arr[0] == this->arr[idx-1])
        throw std::runtime_error("no span found\n");
        
    long ans=INT64_MAX;
    for(unsigned int i=1; i<idx; i++)
    {
        if(this->arr[i]-this->arr[i-1])
            ans=std::min(ans, (long)this->arr[i]-this->arr[i-1]);
    }
    return ans;
}