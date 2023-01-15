/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 02:23:10 by tjo               #+#    #+#             */
/*   Updated: 2023/01/16 03:06:35 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include"IMateriaSource.hpp"
#include"AMateria.hpp"
#include<string>

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *memory[4];
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(const MateriaSource&);
        MateriaSource& operator=(const MateriaSource&);
        void learnMateria(AMateria *);
        AMateria *createMateria(std::string const &type);
};
