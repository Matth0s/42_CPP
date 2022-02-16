/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:39:47 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/13 21:39:48 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.hpp"

int	main( void )
{
	Zombie *Z;

	Z = newZombie( "Bob" );
	Z->announce();
	randomChump( "Marley" );
	delete Z;
	return (0);
}
