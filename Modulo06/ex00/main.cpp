/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:28:00 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/16 08:09:12 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int	main( int argc, char *argv[] )
{
	if (argc < 2)
		return (0);
	Conversion cc(static_cast<std::string>(argv[1]));
	cc.printConvert();
	return (0);
}
