/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:40:02 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/13 21:40:03 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.hpp"

void randomChump( std::string name )
{
	Zombie	Z( name );

	Z.announce();
}