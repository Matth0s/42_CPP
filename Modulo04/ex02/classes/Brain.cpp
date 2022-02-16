/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:21:05 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:21:06 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Brain Default constructor created" << std::endl;
	return ;
}

Brain::Brain( Brain const &src )
{
	std::cout << "Brain Copy constructor created" << std::endl;
	this->operator=( src );
	return ;
}

Brain::~Brain( void )
{
	std::cout << "Brain Destructor called" << std::endl;
	return ;
}

Brain&	Brain::operator=( const Brain &rhs )
{
	std::cout << "Brain Copy assignment operator called" << std::endl;
	if (this != &rhs)
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	return (*this);
}

void	Brain::setIdeas( int index, std::string idea )
{
	if (index >= 0 && index <= 100)
		this->_ideas[index] = idea;
}

std::string	Brain::getIdeas( int index ) const
{
	if (index >= 0 && index <= 100)
		return (this->_ideas[index]);
	else
		return ("No idea about it");
}