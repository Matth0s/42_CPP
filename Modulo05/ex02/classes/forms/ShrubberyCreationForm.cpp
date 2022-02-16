/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:25:03 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:25:04 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void )
	: Form("ShrubberyCreation", 25, 5), _target("SC_aqr")
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target )
	: Form("ShrubberyCreation", 25, 5), _target(target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &src )
	: Form("ShrubberyCreation", 25, 5)
{
	this->operator=( src );
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	return ;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=( const ShrubberyCreationForm &rhs )
{
	if (this != &rhs)
		this->_target = rhs._target;
	return (*this);
}

void	ShrubberyCreationForm::execute( Bureaucrat const& executor ) const
{
	if (!(this->canBeExecute( executor )))
		return ;

	std::ofstream	fileOut;
	std::string		fileName;

	fileName = this->_target + "_shrubbery";
	fileOut.open( fileName.c_str(), std::ofstream::out | std::ofstream::trunc );
	fileOut << "        # #### ####           \n"
			<< "      ### \\/#|### |/####      \n"
			<< "     ##\\/#/ \\||/##/_/##/_#    \n"
			<< "   ###  \\/###|/ \\/ # ###      \n"
			<< " ##_\\_#\\_\\## | #/###_/_####   \n"
			<< "## #### # \\ #| /  #### ##/##  \n"
			<< " __#_--###`  |{,###---###-~   \n"
			<< "           \\ }{               \n"
			<< "            }}{               \n"
			<< "            }}{               \n"
			<< "            {{}               \n"
			<< "      , -=-~{ .-^- _          \n";
	fileOut.close();
	std::cout << "ASCII Tree created!" << std::endl;
}


