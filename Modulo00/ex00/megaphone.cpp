/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:37:07 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/13 21:37:39 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	*megaphone( char *argv )
{
	char	*str;

	str = argv - 1;
	while (*(++str))
		*str = toupper( *str );
	return (argv);
}

int	main( int argc, char *argv[] )
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		while (*(++argv))
			std::cout << megaphone( *argv ) << " ";
	std::cout << std::endl;
	return (0);
}
