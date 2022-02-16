/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:21:17 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/16 08:08:49 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <AAnimal.hpp>

class Cat : public AAnimal
{
	private:

		Brain	*_brain;

	public:

		Cat( void );
		Cat( Cat const &src );
		~Cat( void );

		Cat& operator=( const Cat &rhs );

		void	makeSound( void ) const;

		void	setIdeasBrain( int index, std::string idea );
		std::string	getIdeasBrain( int index ) const;

};

#endif
