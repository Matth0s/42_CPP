/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:17:28 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:17:29 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main( void )
{
	FragTrap jhow("Jhow");

	std::cout << std::endl;

	jhow.attack("'O tal do 17'");
	jhow.ClapTrap::attack("'O tal do 17'");
	jhow.takeDamage(70);
	jhow.beRepaired(70);

	std::cout << std::endl;

	jhow.highFivesGuys();

	std::cout << std::endl;

	jhow.takeDamage(70);
	jhow.takeDamage(70);

	std::cout << std::endl;

	jhow.beRepaired(70);
	jhow.attack("'O tal do 17'");

	std::cout << std::endl;

	return (0);
}
