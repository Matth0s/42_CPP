/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:21:25 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/16 08:08:49 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <AAnimal.hpp>

class Dog : public AAnimal
{
	private:

		Brain	*_brain;

	public:

		Dog( void );
		Dog( Dog const &src );
		~Dog( void );

		Dog& operator=( const Dog &rhs );

		void	makeSound( void ) const;

		void	setIdeasBrain( int index, std::string idea );
		std::string	getIdeasBrain( int index ) const;

};

#endif
