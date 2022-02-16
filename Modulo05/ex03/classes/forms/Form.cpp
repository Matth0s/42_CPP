/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:25:38 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:25:39 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void )
	: _name("Noname"), _signed(false), _gradeSign(150), _gradeExec(150)
{
	return ;
}

Form::Form( std::string name, int gradeSign, int gradeExec )
	: _name(name), _signed(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	if (this->_gradeSign < 1 || this->_gradeExec < 1)
		throw Form::GradeTooHighException();
	if (this->_gradeSign > 150 || this->_gradeExec > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::Form( Form const &src )
	: _name(src.getName()), _gradeSign(src.getGradeSign()),
	_gradeExec(src.getGradeExec())
{
	this->operator=( src );
	return ;
}

Form::~Form( void )
{
	return ;
}

Form&	Form::operator=( const Form &rhs )
{
	if (this != &rhs)
		this->_signed = rhs.getSigned();
	return (*this);
}

const char* Form::GradeTooHighException::what( void ) const throw()
{
	return ("exception :Form grade is too high!");
}

const char* Form::GradeTooLowException::what( void ) const throw()
{
	return ("exception: Form grade is too low!");
}

const char* Form::FormIsNotSigned::what( void ) const throw()
{
	return ("exception: Form is not signed!");
}

std::string		Form::getName( void ) const
{
	return (this->_name);
}

bool			Form::getSigned( void ) const
{
	return (this->_signed);
}

int				Form::getGradeSign( void ) const
{
	return (this->_gradeSign);
}

int				Form::getGradeExec( void ) const
{
	return (this->_gradeExec);
}

void			Form::beSigned( Bureaucrat& bureaucrat )
{
	if (bureaucrat.getGrade() <= this->_gradeSign)
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

bool			Form::canBeExecute( Bureaucrat const& bureaucrat ) const
{
	if (this->getSigned())
	{
		if (bureaucrat.getGrade() <= this->_gradeExec)
			return (true);
		else
			throw Form::GradeTooLowException();
	}
	else
		throw Form::FormIsNotSigned();
	return (false);
}

std::ostream&	operator<<( std::ostream& output, const Form &src )
{
	output << src.getName();
	output << ", form grade sign: " << src.getGradeSign();
	output << ", grade exec: "  << src.getGradeExec();
	output << " and is signed: ";
	if (src.getSigned())
		output << "Yes";
	else
		output << "No";
	return (output);
}
