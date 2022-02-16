/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:22:21 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:22:22 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void )
	: AMateria("ice")
{
	return ;
}

Ice::Ice( Ice const &src )
	: AMateria("ice")
{
	this->operator=( src );
	return ;
}

Ice::~Ice( void )
{
	return ;
}

Ice&	Ice::operator=( const Ice &rhs )
{
	(void)rhs;
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
