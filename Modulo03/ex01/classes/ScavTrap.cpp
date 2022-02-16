/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:16:27 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:16:28 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
	: ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Default constructor of ScavTrap called" << std::endl;
	return ;
}

ScavTrap::ScavTrap( std::string name )
	: ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Name constructor of ScavTrap called" << std::endl;
	return ;
}

ScavTrap::ScavTrap( ScavTrap const &src )
{
	std::cout << "Copy constructor of ScavTrap called" << std::endl;
	this->operator=( src );
	return ;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "Destructor of ScavTrap called" << std::endl;
	return ;
}

ScavTrap&	ScavTrap::operator=( const ScavTrap &rhs )
{
	std::cout << "Copy assignment operator of ScavTrap called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

void	ScavTrap::attack( const std::string& target )
{
	if (!(this->_hitPoints))
		std::cout << "ScavTrap " << this->_name << " id dead!" << std::endl;
	else if (this->_energyPoints)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_hitPoints << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << "ScavTrap " << this->_name << " doesn't have energy points!" << std::endl;
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}
