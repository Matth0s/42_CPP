/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:19:11 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:19:12 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void )
	: type("Notype")
{
	std::cout << "Animal Default constructor created" << std::endl;
	return ;
}

Animal::Animal( Animal const &src )
{
	std::cout << "Animal Copy constructor created" << std::endl;
	this->operator=( src );
	return ;
}

Animal::~Animal( void )
{
	std::cout << "Animal Destructor called" << std::endl;
	return ;
}

Animal&	Animal::operator=( const Animal &rhs )
{
	std::cout << "Animal Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

void	Animal::makeSound( void ) const
{
	std::cout << "ZZzZzZzzZzzZZzzZzzz..." << std::endl;
}

std::string	Animal::getType( void ) const
{
	return (this->type);
}