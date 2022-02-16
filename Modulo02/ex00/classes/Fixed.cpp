/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:13:11 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:13:12 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_bits = 8;

Fixed::Fixed( void )
	: _RawBits(0)
{
	std::cout << "Default constructor called" << std::endl;

	return ;
}

Fixed::Fixed( Fixed const &src )
{
	std::cout << "Copy constructor called" << std::endl;
	this->operator=(src);
	return ;
}
Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}



Fixed&	Fixed::operator=( const Fixed &rhs )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->setRawBits( rhs.getRawBits() );
	return (*this);
}



int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_RawBits);
}

void	Fixed::setRawBits( int const raw )
{
	this->_RawBits = raw;
}
