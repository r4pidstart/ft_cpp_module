/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 05:24:59 by tjo               #+#    #+#             */
/*   Updated: 2023/02/08 05:53:21 by tjo              ###   ########.fr       */
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

template<class T>
MutantStack<T>::MutantStack()
{
    
}

template<class T>
MutantStack<T>::~MutantStack()
{
    
}

template<class T>
MutantStack<T>::MutantStack(const MutantStack &a)
{
    *this=a;
}

template<class T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack &a)
{
    *this=a;
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