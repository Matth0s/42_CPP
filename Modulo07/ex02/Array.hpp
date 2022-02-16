/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:29:44 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/16 08:08:49 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
	private:

		T*				_array;
		unsigned int	_size;

	public:

		Array( void ): _array(NULL), _size(0) {};
		Array( unsigned int size ): _array(new T[size]), _size(size) {};
		Array( Array const &src ): _array(NULL) { this->operator=( src ); };
		~Array( void ) { delete[] this->_array; };

		unsigned int	size( void ) const { return (this->_size); };

		Array&	operator=( const Array &rhs )
		{
			if (this != &rhs)
			{
				delete[] this->_array;
				this->_array = new T[rhs.size()];
				for (unsigned int i = 0; i < rhs.size(); i++)
					this->_array[i] = rhs[i];
				this->_size = rhs.size();
			}
			return (*this);
		};

		T&	operator[]( unsigned int index ) const
		{
			if (index >= this->_size)
				throw Array::IndexOutOfRange();
			return (this->_array[index]);
		};

		class IndexOutOfRange : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Index out of range!");
				};
		};
};

#endif
