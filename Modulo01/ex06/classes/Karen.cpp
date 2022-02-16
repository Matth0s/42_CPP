/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:44:36 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/13 21:44:37 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen( void )
{
	return ;
}

Karen::~Karen( void )
{
	return ;
}

void	Karen::debug( void )
{
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
}

void	Karen::info( void )
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void	Karen::warning( void )
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void	Karen::error( void )
{
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void	Karen::unknown( void )
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void	Karen::complain( std::string level )
{
	karenComplain func[] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error, &Karen::unknown};
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i;
	
	i = 0;
	while (i < 4 && levels[i] != level)
		i++;
	switch (i)
	{
    	case 0 : 
			(this->*func[0])();
		case 1 : 
			(this->*func[1])();
		case 2 : 
			(this->*func[2])();
		case 3 : 
			(this->*func[3])();
			break ;
		default :
			(this->*func[4])();
			break ;
	}
}