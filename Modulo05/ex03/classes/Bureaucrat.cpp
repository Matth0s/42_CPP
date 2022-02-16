/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:26:16 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:26:17 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void )
	: _name("Noname"), _grade(150)
{
	return ;
}

Bureaucrat::Bureaucrat( std::string name, int grade )
	: _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat( Bureaucrat const &src )
	: _name(src.getName())
{
	this->operator=( src );
	return ;
}

Bureaucrat::~Bureaucrat( void )
{
	return ;
}

Bureaucrat&	Bureaucrat::operator=( const Bureaucrat &rhs )
{
	if (this != &rhs)
		this->_grade = rhs._grade;
	return (*this);
}

std::string	Bureaucrat::getName( void ) const
{
	return (this->_name);
}

int			Bureaucrat::getGrade( void ) const
{
	return (this->_grade);
}

void		Bureaucrat::upGrade( void )
{
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void		Bureaucrat::downGrade( void )
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("exception: Bureaucrat grade is too high!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("exception: Bureaucrat grade is too low!");
}

void		Bureaucrat::signForm( Form& form )
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	}
	catch (std::exception& ex)
	{
		std::cout << this->_name << " couldn't sign " << form.getName() << " because ";
		std::cout << ex.what() << std::endl;
	}
}

void		Bureaucrat::executeForm( Form const& form )
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " executed " << form.getName() << std::endl;
	}
	catch (std::exception& ex)
	{
		std::cout << this->_name << " couldn't execute " << form.getName() << " because ";
		std::cout << ex.what() << std::endl;
	}
}

std::ostream&	operator<<( std::ostream& output, const Bureaucrat &src )
{
	output << src.getName() << ", bureaucrat grade " << src.getGrade() << ".";
	return (output);
}
