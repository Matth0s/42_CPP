/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:31:23 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/16 08:08:49 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <deque>
# include <stack>

template<typename T, typename container = std::deque<T> >
class MutantStack : public std::stack< T, container>
{
	public:

		MutantStack( void ): std::stack< T, container>() {};
		MutantStack( MutantStack const &src ): std::stack< T, container>( src ) {};
		~MutantStack( void ) {};

		MutantStack&	operator=( const MutantStack &rhs )
		{
			if (this != &rhs)
				std::stack< T, container>::operator=( rhs );
			return (*this);
		};

		typedef typename container::iterator iterator;

		typename container::iterator	begin( void ) { return (this->c.begin()); };
		typename container::iterator	end( void ) { return (this->c.end()); };
};

#endif

