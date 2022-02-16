/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:14:01 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/16 08:08:49 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:

		static const int	_bits;
		int					_rawBits;

	public:

		Fixed( void );
		Fixed( const int number );
		Fixed( const float number );
		Fixed( Fixed const &src );
		~Fixed( void );

		Fixed&	operator=( const Fixed &rhs );

		bool	operator>( const Fixed &rhs );
		bool	operator<( const Fixed &rhs );
		bool	operator>=( const Fixed &rhs );
		bool	operator<=( const Fixed &rhs );
		bool	operator==( const Fixed &rhs );
		bool	operator!=( const Fixed &rhs );

		Fixed	operator+( const Fixed &rhs );
		Fixed	operator-( const Fixed &rhs );
		Fixed	operator*( const Fixed &rhs );
		Fixed	operator/( const Fixed &rhs );

		Fixed&	operator++( void );
		Fixed	operator++( int );
		Fixed&	operator--( void );
		Fixed	operator--( int );

		static Fixed& 		max( Fixed &f1, Fixed &f2 );
		static const Fixed&	max( const Fixed &f1, const Fixed &f2 );
		static Fixed&		min( Fixed &f1, Fixed &f2 );
		static const Fixed&	min( const Fixed &f1, const Fixed &f2 );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		int 	toInt( void ) const;
		float	toFloat( void ) const;

};

std::ostream&	operator<<( std::ostream& output, const Fixed &src );

#endif
