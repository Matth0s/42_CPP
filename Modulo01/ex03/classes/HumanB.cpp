/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:43:23 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/13 21:43:24 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB( std::string name )
{
	this->_name = name;
	this->_gun = NULL;
}

HumanB::~HumanB( void )
{
	return ;
}

void	HumanB::setWeapon( Weapon &gun )
{
	this->_gun = &gun;
}

void	HumanB::attack( void )
{
	std::cout << this->_name << " attacks with their ";
	if (this->_gun)
		std::cout << this->_gun->getType() << std::endl;	
	else
		std::cout << "your hands" << std::endl;
}
