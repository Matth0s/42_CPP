/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:19:55 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/16 08:08:49 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_DOG_HPP
# define WRONG_DOG_HPP

# include <WrongAnimal.hpp>

class WrongDog : public WrongAnimal
{
	public:

		WrongDog( void );
		WrongDog( WrongDog const &src );
		~WrongDog( void );

		WrongDog& operator=( const WrongDog &rhs );

		void	makeSound( void ) const;

};

#endif
