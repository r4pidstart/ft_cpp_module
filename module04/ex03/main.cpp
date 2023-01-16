/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 02:22:37 by tjo               #+#    #+#             */
/*   Updated: 2023/01/16 17:47:31 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AMateria.hpp"
#include"Character.hpp"
#include"Cure.hpp"
#include"Ice.hpp"
#include"ICharacter.hpp"
#include"IMateriaSource.hpp"
#include"MateriaSource.hpp"

#include<cstdlib>

int main()
{
    IMateriaSource *src = new MateriaSource();
    AMateria *ice = new Ice(), *cure = new Cure();
    src->learnMateria(ice);
    src->learnMateria(cure);

    ICharacter *me = new Character("me");
    
    AMateria *tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter *bob = new Character("bob");
    
    me->use(0, *bob);
    me->use(1, *bob);
    
    delete bob;
    delete me;
    delete src;
    delete ice;
    delete cure;

    // system("leaks $PPID");
    return 0;
}
