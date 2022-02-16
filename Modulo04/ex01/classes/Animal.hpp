/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:20:13 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/16 08:08:49 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "Brain.hpp"

class Animal
{
	protected:

		std::string type;

	public:

		Animal( void );
		Animal( Animal const &src );
		virtual ~Animal( void );

		Animal& operator=( const Animal &rhs );

		virtual void	makeSound( void ) const;
		std::string		getType( void ) const;

		virtual void		setIdeasBrain( int index, std::string idea );
		virtual std::string	getIdeasBrain( int index ) const;

};

#endif
