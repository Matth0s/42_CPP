/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:21:42 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:21:43 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
	: type(type)
{
	return ;
}

AMateria::AMateria( AMateria const &src )
{
	this->operator=( src );
	return ;
}

AMateria::~AMateria( void )
{
	return ;
}

AMateria&	AMateria::operator=( const AMateria &rhs )
{
	if (this != &rhs)
		this->type = rhs.getType();
	return (*this);
}

std::string const&	AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* Doesn't do anything in " << target.getName() << " *" << std::endl;
}
