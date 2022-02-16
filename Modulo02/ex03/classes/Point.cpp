/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:14:25 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:14:26 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void )
	: _x(0), _y(0)
{
	return ;
}

Point::Point( const float x, const float y )
	: _x(x), _y(y)
{
	return ;
}

Point::Point( Point const &src )
{
	this->operator=( src );
	return ;
}

Point::~Point( void )
{
	return ;
}



Point&	Point::operator=( const Point &rhs )
{
	if (this != &rhs)
	{
		this->setX( rhs.getX() );
		this->setY( rhs.getY() );
	}
	return (*this);
}

bool	Point::operator==( const Point &rhs ) const
{
	if (this->getX() != rhs.getX())
		return (false);
	if (this->getY() != rhs.getY())
		return (false);
	return (true);
}

const Point	Point::operator+( const Point &rhs ) const
{
	Point temp;
	temp.setX( this->getX() + rhs.getX() );
	temp.setY( this->getY() + rhs.getY() );
	return (temp);
}

const Point	Point::operator-( const Point &rhs ) const
{
	Point temp;
	temp.setX( this->getX() - rhs.getX() );
	temp.setY( this->getY() - rhs.getY() );
	return (temp);
}




Fixed	Point::getX( void ) const
{
	return (this->_x);
}
Fixed	Point::getY( void ) const
{
	return (this->_y);
}

void	Point::setX( Fixed x )
{
	this->_x = x;
}
void	Point::setY( Fixed y )
{
	this->_y = y;
}