/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:27:27 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:27:28 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion( void )
	: _str(""), _char(0), _int(0), _float(0),
	 _double(0), _other(false), _error(false)
{
	return ;
}

Conversion::Conversion( std::string literal )
	: _str(literal), _char(0), _int(0), _float(0),
	 _double(0), _other(false), _error(false)
{
	this->_convertion();
	return ;
}

Conversion::Conversion( Conversion const &src )
{
	this->operator=( src );
	return ;
}

Conversion::~Conversion( void )
{
	return ;
}

Conversion&	Conversion::operator=( const Conversion &rhs )
{
	if (this != &rhs)
	{
		this->_str = rhs._str;
		this->_char = rhs._char;
		this->_int = rhs._int;
		this->_float = rhs._float;
		this->_double = rhs._double;
		this->_other = rhs._other;
		this->_error = rhs._error;
	}
	return (*this);
}

void	Conversion::_printValues( void )
{
	std::cout << "char: ";
	if (this->_char < 32 || this->_char > 126)
		std::cout << "Non displayable\n";
	else
		std::cout << "'" << this->_char << "'\n";

	std::cout << "int: " << this->_int << "\n";

	std::cout << "float: " << this->_float;
	if (fmod( this->_float * 10, 10 ) == 0 && this->_float < 1000000)
		std::cout << ".0";
	std::cout << "f\n";

	std::cout << "double: " << this->_double;
	if (fmod( this->_double * 10, 10 ) == 0 && this->_double < 1000000)
		std::cout << ".0";
	std::cout << std::endl;

}

void	Conversion::_printOther( void )
{
	std::cout << "char: impossible\n";
	std::cout << "int: impossible\n";
	std::cout << "float: " << this->_str << "\n";
	std::cout << "double: " << this->_str.substr( 0, this->_str.size() - 1 );
	std::cout << std::endl;
}

void	Conversion::_printError( void )
{
	std::cout << "char: impossible\n";
	std::cout << "int: impossible\n";
	std::cout << "float: impossible\n";
	std::cout << "double: impossible" << std::endl;
}

void	Conversion::printConvert( void )
{
	if (this->_error)
		this->_printError();
	else if (this->_other)
		this->_printOther();
	else
		this->_printValues();
}

void	Conversion::_setType( void )
{
	if (this->_str.size() == 1
		&& this->_str.find_first_not_of("0123456789") != std::string::npos)
		this->_setWithChar();
	else if (this->_str.find_first_of( 'f' ) != std::string::npos)
		this->_setWithFloat();
	else if (this->_str.find_first_of( '.' ) != std::string::npos)
		this->_setWithDouble();
	else if (strtod(this->_str.c_str(), NULL) > MAXINT
			|| strtod(this->_str.c_str(), NULL) < MININT)
		this->_setWithDouble();
	else
		this->_setWithInt();
}

bool	Conversion::_syntaxError( char c, size_t index )
{
	size_t	i;

	if (this->_str.find_first_of(c) != this->_str.find_last_of(c))
		return (true);
	i = this->_str.find_first_of(c);
	if (i != std::string::npos && i != index)
		return (true);
	return (false);
}

bool	Conversion::_searchError( void )
{
	if (this->_str.size() == 1)
		return (false);
	if (this->_str.find_first_not_of("+-012345.6789f") != std::string::npos)
		return (true);
	if (this->_syntaxError( 'f', this->_str.size() - 1 ))
		return (true);
	if (this->_syntaxError( '+', 0 ))
		return (true);
	if (this->_syntaxError( '-', 0 ))
		return (true);
	if (this->_str.find_first_of('.') != this->_str.find_last_of('.'))
		return (true);
	return (false);
}

bool		Conversion::_searchOther( void )
{
	if (this->_str == "-inff" || this->_str == "+inff" || this->_str == "nanf")
		return (true);
	else if (this->_str == "-inf" || this->_str == "+inf" || this->_str == "nan")
	{
		this->_str.append("f");
		return (true);
	}
	else
		return (false);
}

void	Conversion::_convertion( void )
{
	if ((this->_other = this->_searchOther()))
		return ;
	if ((this->_error = this->_searchError()))
		return ;
	this->_setType();
}

void	Conversion::_setWithChar( void )
{
	this->_char = static_cast<char>(this->_str[0]);
	this->_int = static_cast<int>(this->_char);
	this->_float = static_cast<float>(this->_char);
	this->_double = static_cast<double>(this->_char);
}

void	Conversion::_setWithInt( void )
{
	this->_int = static_cast<int>(atoi(this->_str.c_str()));
	this->_char = static_cast<char>(this->_int);
	this->_float = static_cast<float>(this->_int);
	this->_double = static_cast<double>(this->_int);
}

void	Conversion::_setWithFloat( void )
{
	this->_float = static_cast<float>(strtof(this->_str.c_str(), NULL));
	this->_char = static_cast<char>(this->_float);
	this->_int = static_cast<int>(this->_float);
	this->_double = static_cast<double>(this->_float);
}

void	Conversion::_setWithDouble( void )
{
	this->_double = static_cast<double>(strtod(this->_str.c_str(), NULL));
	this->_char = static_cast<char>(this->_double);
	this->_int = static_cast<int>(this->_double);
	this->_float = static_cast<float>(this->_double);
}
