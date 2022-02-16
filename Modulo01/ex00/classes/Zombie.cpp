/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:39:32 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/13 21:39:33 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name )
{
	this->_name = name;
	return ;
}

Zombie::Zombie( void )
{
	this->_name = "";
	return ;
}

Zombie::~Zombie( void )
{
	std::cout << this->_name << " died" << std::endl;
	return ;
}

std::string	Zombie::getName( void )
{
	return (this->_name);
}

void		Zombie::setName( std::string name )
{
	this->_name = name;
}

void		Zombie::announce( void )
{
	std::cout << this->getName() + ": BraiiiiiiinnnzzzZ..." << std::endl;
}
