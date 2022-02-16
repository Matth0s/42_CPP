/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:19:38 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:19:39 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
	: type("WrongNotype")
{
	std::cout << "WrongAnimal Default constructor created" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal( WrongAnimal const &src )
{
	std::cout << "WrongAnimal Copy constructor created" << std::endl;
	this->operator=( src );
	return ;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
	return ;
}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal &rhs )
{
	std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "ZZzZzZzzZzzZZzzZzzz..." << std::endl;
}

std::string	WrongAnimal::getType( void ) const
{
	return (this->type);
}