/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:22:30 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:22:31 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void )
	: _name("Noname")
{
	for	(int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
	return ;
}

Character::Character( std::string name )
	: _name(name)
{
	for	(int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
	return ;
}

Character::Character( Character const &src )
{
	for	(int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
	this->operator=( src );
	return ;
}

Character::~Character( void )
{
	for	(int i = 0; i < 4; i++)
	{
		delete this->_slots[i];
		this->_slots[i] = NULL;
	}
	return ;
}

Character&	Character::operator=( const Character &rhs )
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		for	(int i = 0; i < 4; i++)
		{
			delete this->_slots[i];
			if (rhs._slots[i] != NULL)
				this->_slots[i] = rhs._slots[i]->clone();
		}
	}
	return (*this);
}

std::string const& Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
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

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		this->_slots[idx] = NULL;
	else
		std::cout << "Index out of range" << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3)
	{
		if (this->_slots[idx] != NULL)
			this->_slots[idx]->use(target);
		else
			std::cout << "This index has no Materia" << std::endl;
	}
	else
		std::cout << "Index out of range" << std::endl;

}
