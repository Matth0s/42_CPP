/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:22:46 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:22:47 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	for	(int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
	return ;
}

MateriaSource::MateriaSource( MateriaSource const &src )
{
	for	(int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
	this->operator=( src );
	return ;
}

MateriaSource::~MateriaSource( void )
{
	for	(int i = 0; i < 4; i++)
	{
		delete this->_slots[i];
		this->_slots[i] = NULL;
	}
	return ;
}

MateriaSource&	MateriaSource::operator=( const MateriaSource &rhs )
{
	if (this != &rhs)
	{
		for	(int i = 0; i < 4; i++)
		{
			delete this->_slots[i];
			if (rhs._slots[i] != NULL)
				this->_slots[i] = rhs._slots[i]->clone();
		}
	}
	return (*this);
}

void		MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_slots[i] == NULL)
		{
			this->_slots[i] = m;
			return ;
		}
	}
	std::cout << "All slots are filled" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
		if (this->_slots[i]->getType() == type)
			return (this->_slots[i]->clone());
	std::cout << "Materia not found" << std::endl;
	return (0);
}
