/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:28:34 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:28:35 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.hpp"

Base*	generate( void )
{
	srand(clock());
	switch (rand() % 3)
	{
		case 0 : return (new A);
		case 1 : return (new B);
		case 2 : return (new C);
		default: return (NULL);
	}
}

void	identify( Base* p )
{
	if (dynamic_cast<A*>(p))
		std::cout << "Object of type A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Object of type B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Object of type C" << std::endl;
	else
		std::cout << "Object not of type A, B or C" << std::endl;
}

void	identify( Base& p )
{
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "Object of type A" << std::endl;
		return ;
	} catch (std::exception& ex) {}

	try
	{
		B b = dynamic_cast<B&>(p);
		std::cout << "Object of type B" << std::endl;
		return ;
	} catch (std::exception& ex) {}

	try
	{
		C c = dynamic_cast<C&>(p);
		std::cout << "Object of type C" << std::endl;
		return ;
	} catch (std::exception& ex) {}

	std::cout << "Object not of type A, B or C" << std::endl;
}
