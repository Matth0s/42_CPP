/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:20:24 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:20:25 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
	: _brain(NULL)
{
	this->type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat Default constructor created" << std::endl;
	return ;
}

Cat::Cat( Cat const &src )
	: _brain(NULL)
{
	std::cout << "Cat Copy constructor created" << std::endl;
	this->operator=( src );
	return ;
}

Cat::~Cat( void )
{
	std::cout << "Cat Destructor called" << std::endl;
	delete this->_brain;
	return ;
}

Cat&	Cat::operator=( const Cat &rhs )
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
		if (!(this->_brain))
			this->_brain = new Brain();
		*(this->_brain) = *(rhs._brain);
	}
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meeeooooooooooooooww" << std::endl;
}

void	Cat::setIdeasBrain( int index, std::string idea )
{
	this->_brain->setIdeas( index, idea );
}

std::string	Cat::getIdeasBrain( int index ) const
{
	return (this->_brain->getIdeas( index ));
}