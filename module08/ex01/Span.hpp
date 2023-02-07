/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 05:01:42 by tjo               #+#    #+#             */
/*   Updated: 2023/02/08 05:09:04 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

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
        void addNumber(int a);
        int shortestSpan();
        int longestSpan();
};