/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:25:28 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:25:29 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main( void )
{
	Bureaucrat	bob("Bob", 1);
	Bureaucrat	joao("João", 150);
	std::string	target("Pinheiro");

	PresidentialPardonForm	form1("Zé Bolinha");
	RobotomyRequestForm		form2("Optimuns Prime");
	ShrubberyCreationForm	form3(target);
	std::cout << std::endl;

	bob.executeForm(form1);
	std::cout << std::endl;
	bob.signForm(form1);
	joao.executeForm(form1);
	std::cout << std::endl;
	bob.executeForm(form1);

	std::cout << "-----------------------------------------------" << std::endl;

	bob.executeForm(form2);
	std::cout << std::endl;
	bob.signForm(form2);
	joao.executeForm(form2);
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		bob.executeForm(form2);
		std::cout << "|" << std::endl;
	}

	std::cout << "-----------------------------------------------" << std::endl;

	bob.executeForm(form3);
	std::cout << std::endl;
	bob.signForm(form3);
	joao.executeForm(form3);
	std::cout << std::endl;
	bob.executeForm(form3);
	std::cout << std::endl;
	target.append("_shrubbery");
	std::ifstream	fileIn( target.c_str(), std::ifstream::in );
	if (fileIn.is_open())
		std::cout << fileIn.rdbuf() << std::endl;

	return (0);
}
