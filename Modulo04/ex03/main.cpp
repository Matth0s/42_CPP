/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:22:56 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:22:57 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int	main ( void )
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	AMateria* tmp1 = src->createMateria("ice");
	AMateria* tmp2 = src->createMateria("cure");
	AMateria* tmp3;
	tmp3 = src->createMateria("ice");

	ICharacter* me = new Character("me");

	ICharacter* bob = new Character("bob");

	me->equip(tmp1);
	me->equip(tmp2);
	me->equip(tmp3);

	std::cout << std::endl;

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);

	std::cout << std::endl;

	me->unequip(0);
	me->unequip(1);

	me->equip(tmp2);
	me->equip(tmp1);

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);

	std::cout << std::endl;

	me->use(5, *bob);
	me->use(3, *bob);
	me->unequip(5);

	std::cout << std::endl;

	delete src;
	delete me;
	delete bob;

	return (0);
}
