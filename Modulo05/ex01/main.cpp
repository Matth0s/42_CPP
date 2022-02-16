/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:24:25 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:24:26 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main( void )
{
	try
	{
		Form CXP22("CXP22", -12, 2);
	}
	catch (std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	try
	{
		Form CXP22("CXP22", 2, -12);
	}
	catch (std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	try
	{
		Form CXP22("CXP22", 0, 0);
	}
	catch (std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Form CXP22("CXP22", 160, 145);
	}
	catch (std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	try
	{
		Form CXP22("CXP22", 145, 160);
	}
	catch (std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	try
	{
		Form CXP22("CXP22", 151, 151);
	}
	catch (std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Form CXP22("CXP22", 100, 100);
		std::cout << CXP22 << std::endl;
	}
	catch (std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	Bureaucrat chiquinho("Chiquinho", 100);
	Form		C22("C22",90,100);
	Form		C44("C44",110,100);

	std::cout << std::endl;

	chiquinho.signForm(C22);
	chiquinho.signForm(C44);

	return (0);
}
