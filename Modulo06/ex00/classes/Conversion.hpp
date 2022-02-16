/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:27:31 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/16 08:08:49 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# define MAXINT 2147483647
# define MININT -2147483648

# include <iostream>
# include <cstdlib>
# include <cmath>

class Conversion
{
	private:

		std::string	_str;

		char		_char;
		int			_int;
		float		_float;
		double		_double;

		bool		_other;
		bool		_error;

	private:

		void		_convertion( void );
		bool		_searchOther( void );
		bool		_searchError( void );
		bool		_syntaxError( char c, size_t index );

	private:

		void		_setType( void );
		void		_setWithChar( void );
		void		_setWithInt( void );
		void		_setWithFloat( void );
		void		_setWithDouble( void );

	private:

		void		_printError( void );
		void		_printOther( void );
		void		_printValues( void );


	public:

		Conversion( void );
		Conversion( std::string literal );
		Conversion( Conversion const &src );
		~Conversion( void );

		Conversion& operator=( const Conversion &rhs );

		void		printConvert( void );

};

#endif
