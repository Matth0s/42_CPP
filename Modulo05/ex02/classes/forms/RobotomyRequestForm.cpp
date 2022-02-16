/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:24:55 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:24:56 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void )
	: Form("RobotomyRequest", 72, 45), _target("RR_aqr")
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target )
	: Form("RobotomyRequest", 72, 45), _target(target)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &src )
	: Form("RobotomyRequest", 72, 45)
{
	this->operator=( src );
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	return ;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=( const RobotomyRequestForm &rhs )
{
	if (this != &rhs)
		this->_target = rhs._target;
	return (*this);
}

void	RobotomyRequestForm::execute( Bureaucrat const& executor ) const
{
	if (!(this->canBeExecute( executor )))
		return ;
	std::cout << "* Preerrererere   Ziiiiiiuunnnn Toc  Toc  Toc *" << std::endl;
	srand(clock());
	if (rand() % 2)
	{
		std::cout << this->_target << " has been robotomized successfully." << std::endl;
	}
	else
		std::cout << this->_target << "'s robotization failed." << std::endl;
}