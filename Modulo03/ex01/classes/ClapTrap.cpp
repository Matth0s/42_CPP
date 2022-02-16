/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:16:21 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:16:22 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
	: _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor of ClapTrap called" << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string name )
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Name constructor of ClapTrap called" << std::endl;
	return ;
}

ClapTrap::ClapTrap( ClapTrap const &src )
{
	std::cout << "Copy constructor of ClapTrap called" << std::endl;
	this->operator=( src );
	return ;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "Destructor of ClapTrap called" << std::endl;
	return ;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap &rhs )
{
	std::cout << "Copy assignment operator of ClapTrap called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

void	ClapTrap::attack( const std::string& target )
{
	if (!(this->_hitPoints))
		std::cout << "ClapTrap " << this->_name << " id dead!" << std::endl;
	else if (this->_energyPoints)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_hitPoints << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << "ClapTrap " << this->_name << " doesn't have energy points!" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (!(this->_hitPoints))
		std::cout << "Trap " << this->_name << " id dead!" << std::endl;
	else if (this->_hitPoints > amount)
	{
		this->_hitPoints -= amount;
		std::cout << "Trap "<< this->_name << " have taken " << amount << " of damage, getting " << this->_hitPoints << " of health!" << std::endl;
	}
	else
	{
		this->_hitPoints = 0;
		std::cout<< "Trap " << this->_name << " have taken " << amount << " of damage and died!" << std::endl;
	}
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (!(this->_hitPoints))
		std::cout << "Trap " << this->_name << " id dead!" << std::endl;
	else if (this->_energyPoints)
	{
		this->_hitPoints += amount;
		std::cout << "Trap " << this->_name << " healed " << amount << ", getting " << this->_hitPoints << " of health!" << std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << "Trap " << this->_name << " doesn't have energy points!" << std::endl;
}
