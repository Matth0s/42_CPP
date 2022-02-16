/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   secretary.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:38:34 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/13 21:38:35 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "secretary.hpp"

int	main( void )
{
	std::string	command;
	PhoneBook	diary;

	std::cout << "|¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨|\n";
	std::cout << "|         The secretary only accepts        |\n";
	std::cout << "|       ADD, SEARCH and EXIT commands       |\n";
	std::cout << "|___________________________________________|" << std::endl;
 	while (42)
	{
		std::cout << "# Insert the command: ";
		std::getline( std::cin, command );
		if (command == "ADD")
			diary.add();
		else if (command == "SEARCH")
			diary.search();
		else if(command == "EXIT")
			break ;
		else
			std::cout << "! Command not found, try again !" << std::endl;
	}
	return (0);
}
