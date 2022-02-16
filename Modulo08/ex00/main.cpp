/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:30:45 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:30:46 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>

# include <cstdlib>
# include <ctime>

int	main( void )
{
	int	array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int start = 1;
	int end = 11;

	{
		std::vector<int>	ctn(array, array + sizeof(array)/sizeof(*array));
		std::vector<int>::iterator	it;

		std::cout << "search in vector{1, 2, 3, 4, 5, 6, 7, 8, 9, 10} the numbers:\n" << std::endl;
		for (int i = start; i < end; i++)
		{
			try
			{
				srand(clock());
				int j = i + 10 * (rand() % 2);
				std::cout << "for " << j << " the result is: ";
				it = easyfind(ctn, j);
				std::cout << *it << std::endl;
			}
			catch (std::exception& ex)
			{
				std::cout << ex.what() << std::endl;
			}
		}
		std::cout << std::endl;
	}

	{
		std::list<int>	ctn(array, array + sizeof(array)/sizeof(*array));
		std::list<int>::iterator	it;

		std::cout << "search in list{1, 2, 3, 4, 5, 6, 7, 8, 9, 10} the numbers:\n" << std::endl;
		for (int i = start; i < end; i++)
		{
			try
			{
				srand(clock());
				int j = i + 10 * (rand() % 2);
				std::cout << "for " << j << " the result is: ";
				it = easyfind(ctn, j);
				std::cout << *it << std::endl;
			}
			catch (std::exception& ex)
			{
				std::cout << ex.what() << std::endl;
			}
		}
		std::cout << std::endl;
	}

	{
		std::deque<int>	ctn(array, array + sizeof(array)/sizeof(*array));
		std::deque<int>::iterator	it;

		std::cout << "search in deque{1, 2, 3, 4, 5, 6, 7, 8, 9, 10} the numbers:\n" << std::endl;
		for (int i = start; i < end; i++)
		{
			try
			{
				srand(clock());
				int j = i + 10 * (rand() % 2);
				std::cout << "for " << j << " the result is: ";
				it = easyfind(ctn, j);
				std::cout << *it << std::endl;
			}
			catch (std::exception& ex)
			{
				std::cout << ex.what() << std::endl;
			}
		}
		std::cout << std::endl;
	}

	return (0);
}
