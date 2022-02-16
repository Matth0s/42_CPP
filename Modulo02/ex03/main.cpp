/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:14:44 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:14:45 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.hpp"

void	printInTriangle( std::string point, std::string triangle, bool resp )
{
	if (resp)
		std::cout << point << " Inside the triangle " << triangle << std::endl;
	else
		std::cout << point << " Out of the triangle " << triangle << std::endl;
}

int main( void )
{
	{
		Point X( 1, 0 );
		Point Y( 0, 1 );
		Point Z( 0, 0 );

		Point P1( 0, 0 );
		printInTriangle( "P1", "XYZ", bsp( X, Y, Z, P1 ) );
		Point P2( 0, 1 );
		printInTriangle( "P2", "XYZ", bsp( Y, X, Z, P2 ) );
		Point P3( 1, 0 );
		printInTriangle( "P3", "XYZ", bsp( Y, Z, X, P3 ) );
		Point P4( 0.0f, 0.5f );
		printInTriangle( "P4", "XYZ", bsp( Z, X, Y, P4 ) );
		Point P5( 0.5f, 0.0f );
		printInTriangle( "P5", "XYZ", bsp( Z, X, Y, P5 ) );
		Point P6( 0.5f, 0.5f );
		printInTriangle( "P6", "XYZ", bsp( Z, X, Y, P6 ) );
		std::cout << std::endl;
		Point P7( 0.3f, 0.3f );
		printInTriangle( "P7", "XXZ", bsp( X, X, Z, P7 ) );
		printInTriangle( "P7", "XYY", bsp( X, Y, Y, P7 ) );
		printInTriangle( "P7", "ZYZ", bsp( Z, X, Z, P7 ) );
		std::cout << std::endl;
	}
	{
		Point A( 1, 3 );
		Point B( 4, 5 );
		Point C( 5, 2 );

		Point D( 4, 3 );
		printInTriangle( "D", "ABC", bsp( A, B, C, D ) );
		Point E( 5.61f, 3.77f );
		printInTriangle( "E", "ABC", bsp( B, A, C, E ) );
		Point F( 2.52, 2.19 );
		printInTriangle( "F", "ABC", bsp( B, C, A, F ) );
		Point G( 2.98f, 3.36f );
		printInTriangle( "G", "ABC", bsp( C, A, B, G ) );
		Point Z( 3.6f, 2.35f );
		printInTriangle( "Z", "ABC", bsp( C, A, B, Z ) );
		std::cout << std::endl;
	}
	{
		Point H( 10.78f, 1.39 );
		Point I( 12.4, -1.68f );
		Point J( 7, -3 );

		Point K( 8, 1 );
		printInTriangle( "K", "HIJ", bsp( H, I, J, K ) );
		Point L( 10, -1 );
		printInTriangle( "L", "HIJ", bsp( I, H, J, L ) );
		Point M( 12.14, 1.2 );
		printInTriangle( "M", "HIJ", bsp( I, J, H, M ) );
		std::cout << std::endl;
	}
	{
		Point N( -3.1f, -1.48f );
		Point O( 4, -3 );
		Point P( -3, -3 );

		Point Q( -1.68f, -2.29f );
		printInTriangle( "Q", "NOP", bsp( N, O, P, Q ) );
		Point R( -1, -1 );
		printInTriangle( "R", "NOP", bsp( P, N, O, R ) );
		std::cout << std::endl;
	}
	{
		Point S( -3.09f, 2.17f );
		Point T( -3.73f, 4.24f );
		Point U( -0.82f, 4.01f );

		Point V( -2.52f, 3.49f );
		printInTriangle( "V", "STU", bsp( S, T, U, V ) );
		Point W( -2.44, 4.72 );
		printInTriangle( "W", "STU", bsp( T, U, S, W ) );
		std::cout << std::endl;
	}

	return 0;
}
