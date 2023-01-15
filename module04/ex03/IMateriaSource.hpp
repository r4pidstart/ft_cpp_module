/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 02:23:10 by tjo               #+#    #+#             */
/*   Updated: 2023/01/16 03:28:23 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include"AMateria.hpp"
#include<string>

class IMateriaSource
{
public:
    IMateriaSource() {}
    IMateriaSource(const IMateriaSource&) {}
    IMateriaSource& operator=(const IMateriaSource&);
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria *) = 0;
    virtual AMateria *createMateria(std::string const &type) = 0;
};
