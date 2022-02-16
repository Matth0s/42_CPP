/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:26:24 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:26:25 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void )
{
	return ;
}

Intern::Intern( Intern const &src )
{
	this->operator=( src );
	return ;
}

Intern::~Intern( void )
{
	return ;
}

Intern&	Intern::operator=( const Intern &rhs )
{
	(void)rhs;
	return (*this);
}

const char * Intern::FormNotFound::what( void ) const throw()
{
	return ("exception: Intern form not found!");
}

Form*	Intern::ShrubberyCreation( std::string target )
{
	Form*	form = new ShrubberyCreationForm(target);
	std::cout << "Intern creates" << form->getName() << std::endl;
	return (form);
}

Form*	Intern::RobotomyRequest( std::string target )
{
	Form*	form = new RobotomyRequestForm(target);
	std::cout << "Intern creates" << form->getName() << std::endl;
	return (form);
}

Form*	Intern::PresidentialPardon( std::string target )
{
	Form*	form = new PresidentialPardonForm(target);
	std::cout << "Intern creates " << form->getName() << std::endl;
	return (form);
}

Form*	Intern::Unknown( std::string target )
{
	(void)target;
	throw Intern::FormNotFound();
	return (NULL);
}

Form*	Intern::makeForm( std::string name, std::string target )
{
	makers		func[] = {&Intern::ShrubberyCreation, &Intern::RobotomyRequest, &Intern::PresidentialPardon, &Intern::Unknown};
	std::string	names[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int			i;

	i = 0;
	while (i < 3 && names[i] != name)
		i++;
	return ((this->*func[i])(target));
}
