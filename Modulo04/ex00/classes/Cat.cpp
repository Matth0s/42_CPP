/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:19:19 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:19:20 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
	this->type = "Cat";
	std::cout << "Cat Default constructor created" << std::endl;
	return ;
}

Cat::Cat( Cat const &src )
{
	std::cout << "Cat Copy constructor created" << std::endl;
	this->operator=( src );
	return ;
}

Cat::~Cat( void )
{
	std::cout << "Cat Destructor called" << std::endl;
	return ;
}

Cat&	Cat::operator=( const Cat &rhs )
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meeeooooooooooooooww" << std::endl;
}
