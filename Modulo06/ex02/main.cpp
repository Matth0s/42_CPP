/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:28:43 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:28:44 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.hpp"

int	main( void )
{
	Base*	base;

	for ( int i = 0; i < 10; i++)
	{
		std::cout << std::endl;
		base = generate();
		identify( base );
		identify( *base );
		delete base;
	}
	std::cout << std::endl;

	return (0);
}
