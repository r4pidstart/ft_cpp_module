/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 05:24:59 by tjo               #+#    #+#             */
/*   Updated: 2023/02/09 16:53:31 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<stack>

template<class T>
class MutantStack : public std::stack<T>
{
    private:
    public:
        MutantStack();
        ~MutantStack();
        MutantStack(const MutantStack &a);
        MutantStack& operator=(const MutantStack &a);

        typedef typename MutantStack<T>::stack::container_type::iterator iterator;
        iterator begin();
        iterator end();

        typedef typename MutantStack<T>::stack::container_type::reverse_iterator reverse_iterator;
        reverse_iterator rbegin();
        reverse_iterator rend();
        
        typedef typename MutantStack<T>::stack::container_type::const_iterator const_iterator;
        const_iterator cbegin();
        const_iterator cend();

        typedef typename MutantStack<T>::stack::container_type::const_reverse_iterator const_reverse_iterator;
        const_reverse_iterator crbegin();
        const_reverse_iterator crend();
};

#include"MutantStack.tpp"