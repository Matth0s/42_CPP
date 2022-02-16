/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:30:58 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:30:59 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void )
	: _size(0)
{
	return ;
}

Span::Span( unsigned int size )
	: _size(size)
{
	return ;
}

Span::Span( vector::iterator begin, vector::iterator end )
	: _vec(begin, end), _size(end - begin)
{
	return ;
}

Span::Span( Span const &src )
{
	this->operator=( src );
	return ;
}

Span::~Span( void )
{
	return ;
}

Span&	Span::operator=( const Span &rhs )
{
	if (this != &rhs)
	{
		this->_vec = rhs._vec;
		this->_size = rhs._size;
	}
	return (*this);
}

const char* Span::FullStockOfIntegers::what( void ) const throw()
{
	return ("Full stock of integers!!");
}

const char* Span::InvalidInterval::what( void ) const throw()
{
	return ("Invalid interval!!");
}

void	Span::addNumber( int number )
{
	if (this->_vec.size() == this->_size)
		throw Span::FullStockOfIntegers();
	this->_vec.push_back( number );
}

int		Span::shortestSpan( void )
{
	if (this->_vec.size() < 2)
		throw Span::InvalidInterval();

	vector				sortVec = this->_vec;
	vector::iterator	shortes;
	vector::iterator	it;

	std::sort( sortVec.begin(), sortVec.end() );
	shortes = sortVec.begin() + 1;


	for (it = sortVec.begin() + 1; it != sortVec.end(); it++)
		if ((*it - *(it - 1)) < (*shortes - *(shortes - 1)))
			shortes = it;
	return (*shortes - *(shortes - 1));
}

int		Span::longestSpan( void )
{
	if (this->_vec.size() < 2)
		throw Span::InvalidInterval();

	vector::iterator	max = std::max_element(this->_vec.begin(), this->_vec.end());
	vector::iterator	min = std::min_element(this->_vec.begin(), this->_vec.end());
	return (*max - *min);
}
