/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:26:36 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:26:37 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int	main( void )
{
	Intern someRandomIntern;

	std::cout << std::endl;
	try
	{
		Form* rrf;
		rrf = someRandomIntern.makeForm("random form", "Bender");
	}
	catch(std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;

	Bureaucrat	bob("Bob", 1);
	Bureaucrat	joao("João", 150);
	std::string	target("Pinheiro");

	Form		*form1;
	form1 = someRandomIntern.makeForm( "presidential pardon", "Zé Bolinha" );
	std::cout << *form1 << std::endl;
	std::cout << std::endl;

	Form		*form2;
	form2 = someRandomIntern.makeForm( "robotomy request", "Optimuns Prime" );
	std::cout << *form2 << std::endl;
	std::cout << std::endl;

	Form		*form3;
	form3 = someRandomIntern.makeForm( "shrubbery creation", target );
	std::cout << *form3 << std::endl;
	std::cout << std::endl;

	std::cout << "-----------------------------------------------" << std::endl;

	bob.executeForm(*form1);
	std::cout << std::endl;
	bob.signForm(*form1);
	joao.executeForm(*form1);
	std::cout << std::endl;
	bob.executeForm(*form1);

	std::cout << "-----------------------------------------------" << std::endl;

	bob.executeForm(*form2);
	std::cout << std::endl;
	bob.signForm(*form2);
	joao.executeForm(*form2);
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		bob.executeForm(*form2);
		std::cout << "|" << std::endl;
	}

	std::cout << "-----------------------------------------------" << std::endl;

	bob.executeForm(*form3);
	std::cout << std::endl;
	bob.signForm(*form3);
	joao.executeForm(*form3);
	std::cout << std::endl;
	bob.executeForm(*form3);
	std::cout << std::endl;
	target.append("_shrubbery");
	std::ifstream	fileIn( target.c_str(), std::ifstream::in );
	if (fileIn.is_open())
		std::cout << fileIn.rdbuf() << std::endl;

	delete form1;
	delete form2;
	delete form3;

	return (0);
}
