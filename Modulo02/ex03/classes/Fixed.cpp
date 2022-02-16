/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:14:18 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:14:19 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_bits = 8;

Fixed::Fixed( void )
	: _rawBits(0)
{
	return ;
}

Fixed::Fixed( const int number )
{
	this->setRawBits( number << Fixed::_bits );
}

Fixed::Fixed( const float number )
{
	this->setRawBits( roundf( number * (1 << Fixed::_bits)) );
}

Fixed::Fixed( Fixed const &src )
{
	this->operator=( src );
	return ;
}

Fixed::~Fixed( void )
{
	return ;
}



Fixed&	Fixed::operator=( const Fixed &rhs )
{
	if (this != &rhs)
		this->setRawBits( rhs.getRawBits() );
	return (*this);
}

Fixed&	Fixed::operator+=( const Fixed &rhs )
{
	this->setRawBits( this->getRawBits() + rhs.getRawBits() );
	return (*this);
}

Fixed&	Fixed::operator-=( const Fixed &rhs )
{
	this->setRawBits( this->getRawBits() - rhs.getRawBits() );
	return (*this);
}



std::ostream&	operator<<( std::ostream& output, const Fixed &src )
{
	output << src.toFloat();
	return (output);
}


bool	Fixed::operator>( const Fixed &rhs )
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator<( const Fixed &rhs )
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool	Fixed::operator>=( const Fixed &rhs )
{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool	Fixed::operator<=( const Fixed &rhs )
{
	return (this->getRawBits() <= rhs.getRawBits());
}

bool	Fixed::operator==( const Fixed &rhs )
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool	Fixed::operator!=( const Fixed &rhs )
{
	return (this->getRawBits() != rhs.getRawBits());
}


Fixed	Fixed::operator+( const Fixed &rhs )
{
	Fixed temp;
	temp.setRawBits( this->getRawBits() + rhs.getRawBits() );
	return (temp);
}

Fixed	Fixed::operator-( const Fixed &rhs )
{
	Fixed temp;
	temp.setRawBits( this->getRawBits() - rhs.getRawBits() );
	return (temp);
}

Fixed	Fixed::operator*( const Fixed &rhs )
{
	Fixed temp;
	temp.setRawBits( (this->getRawBits() * rhs.getRawBits()) >> Fixed::_bits );
	return (temp);
}

Fixed	Fixed::operator/( const Fixed &rhs )
{
	Fixed temp;
	temp.setRawBits( (this->getRawBits() / rhs.getRawBits()) << Fixed::_bits );
	return (temp);
}


Fixed&	Fixed::operator++( void )
{
	this->setRawBits( this->getRawBits() + 1 );
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed temp(*this);
	this->setRawBits( this->getRawBits() + 1 );
	return (temp);
}

Fixed&	Fixed::operator--( void )
{
	this->setRawBits( this->getRawBits() + 1 );
	return (*this);
}

Fixed	Fixed::operator--( int )
{
	Fixed temp(*this);
	this->setRawBits( this->getRawBits() + 1 );
	return (temp);
}



Fixed&		Fixed::max( Fixed &f1, Fixed &f2 )
{
	if (f1.getRawBits() >= f2.getRawBits())
		return (f1);
	return (f2);
}

const Fixed&	Fixed::max( const Fixed &f1, const Fixed &f2 )
{
	if (f1.getRawBits() >= f2.getRawBits())
		return (f1);
	return (f2);
}

Fixed&		Fixed::min( Fixed &f1, Fixed &f2 )
{
	if (f1.getRawBits() <= f2.getRawBits())
		return (f1);
	return (f2);
}

const Fixed&	Fixed::min( const Fixed &f1, const Fixed &f2 )
{
	if (f1.getRawBits() <= f2.getRawBits())
		return (f1);
	return (f2);
}



int		Fixed::getRawBits( void ) const
{
	return (this->_rawBits);
}

void	Fixed::setRawBits( int const raw )
{
	this->_rawBits = raw;
}



int		Fixed::toInt( void ) const
{
	return (this->getRawBits() >> Fixed::_bits);
}

float		Fixed::toFloat( void ) const
{
	return ((float)this->getRawBits() / (1 << Fixed::_bits));
}
