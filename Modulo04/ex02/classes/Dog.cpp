/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:21:21 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:21:22 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
	: _brain(NULL)
{
	this->type ="Dog";
	this->_brain = new Brain();
	std::cout << "Dog Default constructor created" << std::endl;
	return ;
}

Dog::Dog( Dog const &src )
	: _brain(NULL)
{
	std::cout << "Dog Copy constructor created" << std::endl;
	this->operator=( src );
	return ;
}

Dog::~Dog( void )
{
	std::cout << "Dog Destructor called" << std::endl;
	delete this->_brain;
	return ;
}

Dog&	Dog::operator=( const Dog &rhs )
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
		if (!(this->_brain))
			this->_brain = new Brain();
		*(this->_brain) = *(rhs._brain);
	}
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "WOOOF WOOF      WOOOF" << std::endl;
}

void	Dog::setIdeasBrain( int index, std::string idea )
{
	this->_brain->setIdeas( index, idea );
}

std::string	Dog::getIdeasBrain( int index ) const
{
	return (this->_brain->getIdeas( index ));
}