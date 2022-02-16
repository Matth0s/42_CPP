/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:28:25 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:28:26 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t	serialize( Data* ptr );
Data*		deserialize( uintptr_t raw );

int	main( void )
{
	Data		ptr;
	Data*		ret = NULL;
	uintptr_t	raw;

	std::cout << std::endl;
	std::cout << ptr << std::endl;
	raw = serialize( &ptr );
	std::cout << std::endl;
	std::cout << raw << std::endl;
	std::cout << std::endl;
	ret = deserialize( raw );
	std::cout << *ret << std::endl;
	std::cout << std::endl;

	return (0);
}
