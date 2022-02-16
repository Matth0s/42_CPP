/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:26:28 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/16 08:08:49 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	private:

		typedef	Form*(Intern::*makers)(std::string);

	public:

		Intern( void );
		Intern( Intern const &src );
		~Intern( void );

		class FormNotFound : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		Intern& operator=( const Intern &rhs );

		Form*	ShrubberyCreation( std::string target );
		Form*	RobotomyRequest( std::string target );
		Form*	PresidentialPardon( std::string target );
		Form*	Unknown( std::string target );

		Form*	makeForm( std::string name, std::string target );
};

#endif
