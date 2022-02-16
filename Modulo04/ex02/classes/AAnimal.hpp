/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:20:59 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/16 08:08:49 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include "Brain.hpp"

class AAnimal
{
	protected:

		std::string type;

	public:

		AAnimal( void );
		AAnimal( AAnimal const &src );
		virtual ~AAnimal( void );

		AAnimal& operator=( const AAnimal &rhs );

		std::string		getType( void ) const;

		virtual void	makeSound( void ) const = 0;

		virtual void		setIdeasBrain( int index, std::string idea ) = 0;
		virtual std::string	getIdeasBrain( int index ) const = 0;

};

#endif
