/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:38:09 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/13 21:38:10 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void )
{
	this->_total = 0;
	return ;
}

PhoneBook::~PhoneBook( void )
{
	return ;
}

void	PhoneBook::add( void )
{
	std::cout << "/********************************************\n";
	this->_contacts[this->_total % 8].setFirst();
	this->_contacts[this->_total % 8].setLast();
	this->_contacts[this->_total % 8].setNick();
	this->_contacts[this->_total % 8].setNumber();
	this->_contacts[this->_total % 8].setSecret();
	std::cout << "\\********************************************" << std::endl;
	this->_total++;
}

void	PhoneBook::search( void )
{
	std::string	command;

	_printHeader();
	if (!(this->_total))
		return ;
	std::cout << "Insert the index of contact: ";
	std::getline( std::cin, command );
	while (command.size() != 1
		|| !(isdigit( command[0] ))
		|| command[0] >= this->_total + '0')
	{
		std::cout << "Bad index, try again: ";
		std::getline( std::cin, command );
	}
	_printContact( this->_contacts[command[0] - '0'] );
}

void	PhoneBook::_printHeader( void )
{
	int	i;

	std::cout << "+-------------------------------------------+\n";
	std::cout << "|     index|first name| last name|  nickname|\n";
	std::cout << "+-------------------------------------------+\n";
	i = -1;
	while (++i < this->_total && i < 8)
	{
		std::cout << "|         " << i << "|";
		_formatPrint( this->_contacts[i].getFirst() );
		_formatPrint( this->_contacts[i].getLast() );
		_formatPrint( this->_contacts[i].getNick() );
		std::cout << "\n";
	}
	std::cout << "+-------------------------------------------+" << std::endl;
}

void	PhoneBook::_formatPrint( std::string str )
{
	if (str.size() <= 10)
	{
		std::cout.width( 10 );
		std::cout << str;
	}
	else
	{
		std::cout << str.substr( 0, 9 );
		std::cout << ".";
	}
	std::cout << "|";
}

void	PhoneBook::_printContact( Contact contact )
{
	std::cout << "/--------------------------------------------\n";
	std::cout << "| First Name     : " << contact.getFirst() << '\n';
	std::cout << "| Last Name      : " << contact.getLast() << '\n';
	std::cout << "| Nickname       : " << contact.getNick() << '\n';
	std::cout << "| Phone Number   : " << contact.getNumber() << '\n';
	std::cout << "| Darkest Secret : " << contact.getSecret() << '\n';
	std::cout << "\\--------------------------------------------" << std::endl;
}
