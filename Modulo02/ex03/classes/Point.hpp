/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:14:29 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/16 08:08:49 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	private:

		Fixed	_x;
		Fixed	_y;

	public:

		Point( void );
		Point( const float x, const float y );
		Point( Point const &src );
		~Point( void );

		Point& operator=( const Point &rhs );

		bool			operator==( const Point &rhs ) const;

		const Point		operator+( const Point &rhs ) const;
		const Point		operator-( const Point &rhs ) const;

		Fixed	getX( void ) const;
		Fixed	getY( void ) const;

		void	setX( Fixed x );
		void	setY( Fixed y );

};

#endif
