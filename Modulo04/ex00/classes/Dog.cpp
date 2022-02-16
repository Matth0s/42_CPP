/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:19:27 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:19:28 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{
	this->type = "Dog";
	std::cout << "Dog Default constructor created" << std::endl;
	return ;
}

Dog::Dog( Dog const &src )
{
	std::cout << "Dog Copy constructor created" << std::endl;
	this->operator=( src );
	return ;
}

Dog::~Dog( void )
{
	std::cout << "Dog Destructor called" << std::endl;
	return ;
}

Dog&	Dog::operator=( const Dog &rhs )
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "WOOOF WOOF      WOOOF" << std::endl;
}
