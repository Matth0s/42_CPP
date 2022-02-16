/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:23:51 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:23:52 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void )
{
	try
	{
		Bureaucrat jorge("Jorge", 160);
	}
	catch (std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	try
	{
		Bureaucrat carlos("Carlos", -12);
	}
	catch (std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat jorge("Jorge", 150);
		std::cout << jorge << std::endl;
	}
	catch (std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	try
	{
		Bureaucrat carlos("Carlos", 1);
		std::cout << carlos << std::endl;
	}
	catch (std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat jorge("Jorge", 150);
		jorge.downGrade();
	}
	catch (std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	try
	{
		Bureaucrat carlos("Carlos", 1);
		carlos.upGrade();
	}
	catch (std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat jorge("Jorge", 150);
		jorge.upGrade();
		std::cout << jorge << std::endl;
	}
	catch (std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	try
	{
		Bureaucrat carlos("Carlos", 1);
		carlos.downGrade();
		std::cout << carlos << std::endl;
	}
	catch (std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	return (0);
}
