/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:19:44 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:19:45 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void )
{
	this->type = "WrongCat";
	std::cout << "WrongCat Default constructor created" << std::endl;
	return ;
}

WrongCat::WrongCat( WrongCat const &src )
{
	std::cout << "WrongCat Copy constructor created" << std::endl;
	this->operator=( src );
	return ;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat Destructor called" << std::endl;
	return ;
}

WrongCat&	WrongCat::operator=( const WrongCat &rhs )
{
	std::cout << "WrongCat Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Meeeooooooooooooooww" << std::endl;
}
