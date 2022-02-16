/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:16:49 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:16:50 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main( void )
{
	ScavTrap jhow("Jhow");

	std::cout << std::endl;

	jhow.attack("'O tal do 17'");
	jhow.ClapTrap::attack("'O tal do 17'");
	jhow.takeDamage(50);
	jhow.beRepaired(50);

	std::cout << std::endl;

	jhow.guardGate();

	std::cout << std::endl;

	jhow.takeDamage(50);
	jhow.takeDamage(50);

	std::cout << std::endl;

	jhow.beRepaired(50);
	jhow.ClapTrap::attack("'O tal do 17'");
	jhow.attack("'O tal do 17'");

	std::cout << std::endl;

	return (0);
}
