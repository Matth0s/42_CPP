/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:19:52 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:19:53 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog( void )
{
	this->type = "WrongDog";
	std::cout << "WrongDog Default constructor created" << std::endl;
	return ;
}

WrongDog::WrongDog( WrongDog const &src )
{
	std::cout << "WrongDog Copy constructor created" << std::endl;
	this->operator=( src );
	return ;
}

WrongDog::~WrongDog( void )
{
	std::cout << "WrongDog Destructor called" << std::endl;
	return ;
}

WrongDog&	WrongDog::operator=( const WrongDog &rhs )
{
	std::cout << "WrongDog Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

void	WrongDog::makeSound( void ) const
{
	std::cout << "WOOOF WOOF      WOOOF" << std::endl;
}
