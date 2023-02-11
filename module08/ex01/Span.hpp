/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 05:01:42 by tjo               #+#    #+#             */
/*   Updated: 2023/02/11 23:46:55 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<algorithm>
#include<stdexcept>

class Span
{
    private:
        int *arr;
        unsigned int siz;
        unsigned int idx;
        Span();
    public:
        Span(unsigned int n);
        ~Span();
        Span(const Span &a);
        Span& operator=(const Span &a);
        template <class iterator>
        void addNumber(iterator begin, iterator end)
        {
            if(std::distance(begin, end) > siz-idx)
                throw std::runtime_error("array is full");
            for(; begin != end; begin++)
                this->addNumber(*begin);
        }
        void addNumber(int a);
        int shortestSpan();
        int longestSpan();
};