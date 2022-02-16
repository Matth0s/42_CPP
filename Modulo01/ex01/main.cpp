/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:41:32 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/13 21:41:33 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.hpp"

int	main( void )
{
	Zombie	*Z;
	int		N;
	int		i;

	N = 10;
	i = -1;
	Z = zombieHorde(N, "Zecá" );
	while (++i < N)
		Z[i].announce();
	delete[] Z;
	return (0);
}
