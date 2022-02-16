/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:18:32 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:18:33 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main( void )
{
	DiamondTrap jhow("Jhow");

	std::cout << std::endl;

	jhow.attack("'O tal do 17'");
	jhow.ClapTrap::attack("'O tal do 17'");
	jhow.takeDamage(50);
	jhow.beRepaired(50);

	std::cout << std::endl;

	jhow.guardGate();
	jhow.highFivesGuys();
	jhow.whoAmI();

	std::cout << std::endl;

	jhow.takeDamage(70);
	jhow.takeDamage(70);

	std::cout << std::endl;

	jhow.beRepaired(70);
	jhow.attack("'O tal do 17'");

	std::cout << std::endl;

	jhow.guardGate();
	jhow.highFivesGuys();
	jhow.whoAmI();

	std::cout << std::endl;

	return (0);
}

