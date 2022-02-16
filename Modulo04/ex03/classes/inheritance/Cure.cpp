/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:22:13 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:22:14 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void )
	: AMateria("cure")
{
	return ;
}

Cure::Cure( Cure const &src )
	: AMateria("cure")
{
	this->operator=( src );
	return ;
}

Cure::~Cure( void )
{
	return ;
}

Cure&	Cure::operator=( const Cure &rhs )
{
	(void)rhs;
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
