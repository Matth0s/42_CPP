/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:13:36 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:13:37 by mmoreira         ###   ########.fr       */
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

Fixed::Fixed( const int number )
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits( number << Fixed::_bits );
}

Fixed::Fixed( const float number )
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits( roundf( number * (1 << Fixed::_bits)) );
}

Fixed::Fixed( Fixed const &src )
{
	std::cout << "Copy constructor called" << std::endl;
	this->operator=( src );
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

std::ostream&	operator<<( std::ostream& output, const Fixed &src )
{
	output << src.toFloat();
	return (output);
}



int		Fixed::getRawBits( void ) const
{
	return (this->_RawBits);
}

void	Fixed::setRawBits( int const raw )
{
	this->_RawBits = raw;
}



int		Fixed::toInt( void ) const
{
	return (this->getRawBits() >> Fixed::_bits);
}

float		Fixed::toFloat( void ) const
{
	return ((float)this->getRawBits() / (1 << Fixed::_bits));
}
