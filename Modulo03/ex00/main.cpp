/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:16:11 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:16:12 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap jhow("Jhow");

	std::cout << std::endl;

	jhow.attack("'O tal do 17'");
	jhow.takeDamage(5);
	jhow.beRepaired(5);

	std::cout << std::endl;

	jhow.takeDamage(5);
	jhow.takeDamage(5);

	std::cout << std::endl;

	jhow.beRepaired(5);
	jhow.attack("'O tal do 17'");

	std::cout << std::endl;

	return (0);
}
