/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:41:43 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/13 21:41:44 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.hpp"

Zombie *zombieHorde( int N, std::string name )
{
	Zombie	*Z;
	int		i;

	i = -1;
	Z = new Zombie[N];
	while (++i < N)
		Z[i].setName( name );
	return (Z);
}
