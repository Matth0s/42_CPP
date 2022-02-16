/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:19:48 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/16 08:08:49 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

# include <WrongAnimal.hpp>

class WrongCat : public WrongAnimal
{
	public:

		WrongCat( void );
		WrongCat( WrongCat const &src );
		~WrongCat( void );

		WrongCat& operator=( const WrongCat &rhs );

		void	makeSound( void ) const;

};

#endif
