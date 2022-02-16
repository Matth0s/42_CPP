/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:44:46 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/13 21:44:47 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main( int argc, char *argv[] )
{
	Karen	karen;
	if (argc < 2)
	{
		std::cout << "Required level of complain" << std::endl;
		return (1);
	}
	karen.complain(argv[1]);
	return (0);
}
