/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:25:43 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/16 08:08:49 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "include.hpp"
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:

	const std::string	_name;
	bool				_signed;
	const int			_gradeSign;
	const int			_gradeExec;

	public:

		Form( void );
		Form( std::string name, int gradeSign, int gradeExec );
		Form( Form const &src );
		virtual ~Form( void );

		Form& operator=( const Form &rhs );

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what( void ) const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what( void ) const throw();
		};

		class FormIsNotSigned : public std::exception
		{
			public:
				virtual const char* what( void ) const throw();
		};

		std::string		getName( void ) const;
		bool			getSigned( void ) const;
		int				getGradeSign( void ) const;
		int				getGradeExec( void ) const;

		void			beSigned( Bureaucrat& bureaucrat );
		bool			canBeExecute( Bureaucrat const& bureaucrat ) const;

		virtual void	execute( Bureaucrat const& executor ) const = 0;

};

std::ostream&	operator<<( std::ostream& output, const Form &src );

#endif
