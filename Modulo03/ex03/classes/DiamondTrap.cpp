/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:18:05 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:18:06 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
	: ClapTrap()
{
	this->_name = "";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "Default constructor of DiamondTrap called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap( std::string name )
	:ClapTrap(name + "_clap_name")
{
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "Name constructor of DiamondTrap called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap( DiamondTrap const &src )
{
	std::cout << "Copy constructor of DiamondTrap called" << std::endl;
	this->operator=( src );
	return ;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "Destructor of DiamondTrap called" << std::endl;
	return ;
}

DiamondTrap&	DiamondTrap::operator=( const DiamondTrap &rhs )
{
	std::cout << "Copy assignment operator of DiamondTrap called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

void	DiamondTrap::attack( const std::string& target )
{
	ScavTrap::attack( target );
}


void	DiamondTrap::whoAmI( void )
{
	std::cout << "I am the DiamondTrap " << this->_name << " and the ClapTrap " << this->ClapTrap::_name << std::endl;
}