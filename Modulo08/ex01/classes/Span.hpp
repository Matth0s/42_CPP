/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:31:03 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/16 08:08:49 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>

class Span
{
	private:

		typedef std::vector<int> vector;

		vector			_vec;
		unsigned int	_size;

	public:

		Span( void );
		Span( unsigned int size );
		Span( vector::iterator begin, vector::iterator end );
		Span( Span const &src );
		~Span( void );

		Span&	operator=( const Span &rhs );

		class FullStockOfIntegers : public std::exception
		{
			public:
				virtual const char* what( void ) const throw();
		};

		class InvalidInterval : public std::exception
		{
			public:
				virtual const char* what( void ) const throw();
		};

		void	addNumber( int number );
		int		shortestSpan( void );
		int		longestSpan( void );

};

#endif
