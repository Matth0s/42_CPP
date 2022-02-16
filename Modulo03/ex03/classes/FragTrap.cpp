/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:18:15 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:18:16 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void )
	: ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Default constructor of FragTrap called" << std::endl;
	return ;
}

FragTrap::FragTrap( std::string name )
	: ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Name constructor of FragTrap called" << std::endl;
	return ;
}

FragTrap::FragTrap( FragTrap const &src )
{
	std::cout << "Copy constructor of FragTrap called" << std::endl;
	this->operator=( src );
	return ;
}

FragTrap::~FragTrap( void )
{
	std::cout << "Destructor of FragTrap called" << std::endl;
	return ;
}

FragTrap&	FragTrap::operator=( const FragTrap &rhs )
{
	std::cout << "Copy assignment operator of FragTrap called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

void	FragTrap::attack( const std::string& target )
{
	if (!(this->_hitPoints))
		std::cout << "FragTrap " << this->_name << " id dead!" << std::endl;
	else if (this->_energyPoints)
	{
		std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_hitPoints << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << "FragTrap " << this->_name << " doesn't have energy points!" << std::endl;
}

void	FragTrap::highFivesGuys( void )
{
	std::string highFive;
	std::cout << "FragTrap " << this->_name << " 🖐️   :  ";
	std::getline(std::cin, highFive);
	if (highFive == "🖐️")
		std::cout << "                 👏" << std::endl;
	else
		std::cout << "FragTrap " << this->_name << " is sad" << std::endl;
}
