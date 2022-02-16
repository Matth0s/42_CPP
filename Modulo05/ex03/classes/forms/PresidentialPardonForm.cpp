/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:25:47 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:25:48 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void )
	: Form("PresidentialPardon", 145, 137), _target("PP_aqr")
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target )
	: Form("PresidentialPardon", 145, 137), _target(target)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &src )
	: Form("PresidentialPardon", 145, 137)
{
	this->operator=( src );
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	return ;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=( const PresidentialPardonForm &rhs )
{
	if (this != &rhs)
		this->_target = rhs._target;
	return (*this);
}

void	PresidentialPardonForm::execute( Bureaucrat const& executor ) const
{
	if (!(this->canBeExecute( executor )))
		return ;
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}