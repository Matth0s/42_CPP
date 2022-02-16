/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:37:56 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/13 21:37:57 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact( void )
{
	this->_first = "";
	this->_last = "";
	this->_nick = "";
	this->_number = "";
	this->_secret = "";
	return ;
}

Contact::~Contact( void )
{
	return ;
}

void	Contact::setFirst( void )
{
	unsigned int	i;
	std::string		buffer;

	while (42)
	{
		std::cout << "| Insert First Name     : ";
		std::getline( std::cin, buffer );
		i = 0;
		while (i < buffer.size() && buffer[i] == ' ')
			i++;
		if (i != buffer.size())
			break ;
		std::cout << "| Empty field forbidden!\n";
	}
	i = 0;
	while (i < buffer.size() && buffer[i] == ' ')
		i++;
	this->_first = buffer.substr( i, buffer.size() );
}

void	Contact::setLast( void )
{
	unsigned int	i;
	std::string		buffer;

	while (42)
	{
		std::cout << "| Insert Last Name      : ";
		std::getline( std::cin, buffer );
		i = 0;
		while (i < buffer.size() && buffer[i] == ' ')
			i++;
		if (i != buffer.size())
			break ;
		std::cout << "| Empty field forbidden!\n";
	}
	i = 0;
	while (i < buffer.size() && buffer[i] == ' ')
		i++;
	this->_last = buffer.substr( i, buffer.size() );
}

void	Contact::setNick( void )
{
	unsigned int	i;
	std::string		buffer;

	while (42)
	{
		std::cout << "| Insert Nickname       : ";
		std::getline( std::cin, buffer );
		i = 0;
		while (i < buffer.size() && buffer[i] == ' ')
			i++;
		if (i != buffer.size())
			break ;
		std::cout << "| Empty field forbidden!\n";
	}
	i = 0;
	while (i < buffer.size() && buffer[i] == ' ')
		i++;
	this->_nick = buffer.substr( i, buffer.size() );
}

void	Contact::setNumber( void )
{
	unsigned int	i;
	std::string		buffer;

	while (42)
	{
		std::cout << "| Insert Phone Number   : ";
		std::getline(std::cin, buffer);
		if (buffer.size() == 10 || buffer.size() == 11)
		{
			i = 0;
			while (i < buffer.size() && isdigit( buffer[i] ))
				i++;
			if (i == buffer.size())
				break ;
		}
		std::cout << "| Required 10 or 11 numeric characters!\n";
	}
	this->_number = "(" + buffer.substr( 0, 2 ) + ") ";
	if (buffer.size() == 11)
		this->_number += buffer.substr( 2, 5 ) + "-" + buffer.substr( 7, 4 );
	else
		this->_number += buffer.substr( 2, 4 ) + "-" + buffer.substr( 6, 4 );
}

void	Contact::setSecret( void )
{
	unsigned int	i;
	std::string		buffer;

	while (42)
	{
		std::cout << "| Insert Darkest Secret : ";
		std::getline( std::cin, buffer );
		i = 0;
		while (i < buffer.size() && buffer[i] == ' ')
			i++;
		if (i != buffer.size())
			break ;
		std::cout << "| Empty field forbidden!\n";
	}
	i = 0;
	while (i < buffer.size() && buffer[i] == ' ')
		i++;
	this->_secret = buffer.substr( i, buffer.size() );
}

std::string	Contact::getFirst( void )
{
	return (this->_first);
}

std::string	Contact::getLast( void )
{
	return (this->_last);
}

std::string	Contact::getNick( void )
{
	return (this->_nick);
}

std::string	Contact::getNumber( void )
{
	return (this->_number);
}

std::string	Contact::getSecret( void )
{
	return (this->_secret);
}
