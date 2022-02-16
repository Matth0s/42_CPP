/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:14:09 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/16 03:20:53 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}

// $> ./a.out
// 0
// 0.00390625
// 0.00390625
// 0.00390625
// 0.0078125
// 10.1016
// 10.1016
// $>



// int main( void )
// {
// 	Fixed x(6);
// 	Fixed y(5);

// 	std::cout << "x = " << x << ", y = " << y << std::endl;
// 	std::cout << "x > y: ";
// 	if (x > y)
// 		std::cout << "True" << std::endl;
// 	else
// 		std::cout << "False" << std::endl;

// 	std::cout << "x < y: ";
// 	if (x < y)
// 		std::cout << "True" << std::endl;
// 	else
// 		std::cout << "False" << std::endl;

// 	std::cout << "x >= y: ";
// 	if (x >= y)
// 		std::cout << "True" << std::endl;
// 	else
// 		std::cout << "False" << std::endl;

// 	std::cout << "x <= y: ";
// 	if (x <= y)
// 		std::cout << "True" << std::endl;
// 	else
// 		std::cout << "False" << std::endl;

// 	std::cout << "x == y: ";
// 	if (x == y)
// 		std::cout << "True" << std::endl;
// 	else
// 		std::cout << "False" << std::endl;

// 	std::cout << "x != y: ";
// 	if (x != y)
// 		std::cout << "True" << std::endl;
// 	else
// 		std::cout << "False" << std::endl;

// 	std::cout << "\nx + y = " << x + y << std::endl;
// 	std::cout << "y + x = " << y + x << std::endl;
// 	std::cout << "x - y = " << x - y << std::endl;
// 	std::cout << "y - x = " << y - x << std::endl;
// 	std::cout << "x * y = " << x * y << std::endl;
// 	std::cout << "x * y = " << y * x << std::endl;
// 	std::cout << "x / y = " << x / y << std::endl;
// 	std::cout << "y / x = " << y / x << std::endl;

// 	std::cout << "\nx = " << x << ", x++ = " << x++ << ", x = " << x << std::endl;
// 	std::cout << "y = " << y << ", ++y = " << ++y << ", y = " << y << std::endl;
// 	std::cout << "x = " << x << ", --x = " << --x << ", x = " << x << std::endl;
// 	std::cout << "y = " << y << ", y-- = " << y-- << ", y = " << y << std::endl;

// 	std::cout << "\nmin(x,y) = " << Fixed::min(x,y) << std::endl;
// 	std::cout << "max(x,y) = " << Fixed::max(x,y) << std::endl;

// 	return 0;
// }
