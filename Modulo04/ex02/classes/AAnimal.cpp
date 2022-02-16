/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:20:54 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:20:55 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( void )
{
	std::cout << "AAnimal Default constructor created" << std::endl;
	return ;
}

AAnimal::AAnimal( AAnimal const &src )
{
	std::cout << "AAnimal Copy constructor created" << std::endl;
	this->operator=( src );
	return ;
}

AAnimal::~AAnimal( void )
{
	std::cout << "AAnimal Destructor called" << std::endl;
	return ;
}

AAnimal&	AAnimal::operator=( const AAnimal &rhs )
{
	std::cout << "AAnimal Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

std::string	AAnimal::getType( void ) const
{
	return (this->type);
}
