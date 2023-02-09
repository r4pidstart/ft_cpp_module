/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:26:02 by tjo               #+#    #+#             */
/*   Updated: 2023/02/09 16:54:49 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include"MutantStack.hpp"

template<class T>
MutantStack<T>::MutantStack()
{
    
}

template<class T>
MutantStack<T>::~MutantStack()
{
    
}

template<class T>
MutantStack<T>::MutantStack(const MutantStack &a) : std::stack<T>()
{
    *this=a;
}

template<class T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack &a)
{
    this->c=a.c;
    return *this;
}

template<class T>
typename MutantStack<T>::stack::container_type::iterator MutantStack<T>::begin(void)
{
    return this->c.begin();
}

template<class T>
typename MutantStack<T>::stack::container_type::iterator MutantStack<T>::end(void)
{
    return this->c.end();
}

template<class T>
typename MutantStack<T>::stack::container_type::const_iterator MutantStack<T>::cbegin(void)
{
    return this->c.cbegin();
}

template<class T>
typename MutantStack<T>::stack::container_type::const_iterator MutantStack<T>::cend(void)
{
    return this->c.cend();
}

template<class T>
typename MutantStack<T>::stack::container_type::reverse_iterator MutantStack<T>::rbegin(void)
{
    return this->c.rbegin();
}

template<class T>
typename MutantStack<T>::stack::container_type::reverse_iterator MutantStack<T>::rend(void)
{
    return this->c.rend();
}

template<class T>
typename MutantStack<T>::stack::container_type::const_reverse_iterator MutantStack<T>::crbegin(void)
{
    return this->c.crbegin();
}

template<class T>
typename MutantStack<T>::stack::container_type::const_reverse_iterator MutantStack<T>::crend(void)
{
    return this->c.crend();
}