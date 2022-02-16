/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:29:35 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:29:37 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	sum( int& i ) { i++; }
void	sum( char& i ) { i++; }
void	app( std::string& str ) { str.append("_fruta"); }

template<typename T>
void	print(T* array, unsigned int len, void(*f)(T&) )
{
	std::cout << "old: ";
	for (unsigned int i = 0; i < len; i++)
	{
		if (i != (len - 1))
			std::cout << array[i] << ", ";
		else
			std::cout << array[i] << std::endl;
	}

	iter(array, len, f);

	std::cout << "new: ";
	for (unsigned int i = 0; i < len; i++)
	{
		if (i != (len - 1))
			std::cout << array[i] << ", ";
		else
			std::cout << array[i] << std::endl;
	}
};

int main( void )
{
	int			is[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	print(is, 10, &sum);
	std::cout << std::endl;

	char		cs[] = {'a', 'b', 'c', 'd', 'e', 'f'};
	print(cs, 6, &sum);
	std::cout << std::endl;

	std::string	strs[] = {"banana", "abacaxi", "uva"};
	print(strs, 3, &app);
	std::cout << std::endl;

	return (0);
}