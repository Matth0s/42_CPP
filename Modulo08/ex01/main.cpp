/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:31:07 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:31:08 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

# include <cstdlib>
# include <ctime>

int main()
{
	unsigned int	N = 10;
	{
		Span test1;

		Span test2(N);

		int	array[] = {1, 2, 3, 4, 5};
		Span test3(static_cast<std::vector<int>::iterator>(array),
					static_cast<std::vector<int>::iterator>(array + sizeof(array)/sizeof(*array)));
		std::cout << "Constructor range of iterator:" << std::endl;
		std::cout << "min interval: " << test3.shortestSpan() << std::endl;
		std::cout << "max interval: " << test3.longestSpan() << std::endl;
		std::cout << std::endl;


		Span test4(test3);
		std::cout << "Constructor of copy:" << std::endl;
		std::cout << "min interval: " << test4.shortestSpan() << std::endl;
		std::cout << "max interval: " << test4.longestSpan() << std::endl;
		std::cout << std::endl;

		test1 = test4;
		std::cout << "Copy assignment operator:" << std::endl;
		std::cout << "min interval: " << test1.shortestSpan() << std::endl;
		std::cout << "max interval: " << test1.longestSpan() << std::endl;
		std::cout << std::endl;
	}

	{
		Span sp = Span(N);
		std::vector<int> vec;

		int j = 1;
		std::cout << "numbers: ";
		for (unsigned int i = 0; i < N; i++)
		{
			std::cout << j << ", ";
			sp.addNumber(j);
			vec.push_back(j);
			j *= 2;
		}
		Span spv = Span(vec.begin(), vec.end());
		std::cout << std::endl;
		std::cout << "Ctr unsigned int =      min interval: " << sp.shortestSpan() << std::endl;
		std::cout << "Ctr unsigned int =      max interval: " << sp.longestSpan() << std::endl;
		std::cout << std::endl;
		std::cout << "Ctr range of iterator = min interval: " << spv.shortestSpan() << std::endl;
		std::cout << "Ctr range of iterator = max interval: " << spv.longestSpan() << std::endl;
	}

	std::cout << std::endl;

	{
		Span sp = Span(N);
		std::vector<int> vec;

		int j = 1;
		std::cout << "numbers: ";
		for (unsigned int i = 0; i < N; i++)
		{
			std::cout << j << ", ";
			sp.addNumber(j);
			vec.push_back(j);
			j *= 3;
		}
		Span spv = Span(vec.begin(), vec.end());
		std::cout << std::endl;
		std::cout << "Ctr unsigned int =      min interval: " << sp.shortestSpan() << std::endl;
		std::cout << "Ctr unsigned int =      max interval: " << sp.longestSpan() << std::endl;
		std::cout << std::endl;
		std::cout << "Ctr range of iterator = min interval: " << spv.shortestSpan() << std::endl;
		std::cout << "Ctr range of iterator = max interval: " << spv.longestSpan() << std::endl;
	}

	std::cout << std::endl;

	{
		Span sp = Span(N);
		std::vector<int> vec;

		int j = 1024;
		std::cout << "numbers: ";
		for (unsigned int i = 0; i < N; i++)
		{
			std::cout << j << ", ";
			sp.addNumber(j);
			vec.push_back(j);
			j /= -2;
		}
		Span spv = Span(vec.begin(), vec.end());
		std::cout << std::endl;
		std::cout << "Ctr unsigned int =      min interval: " << sp.shortestSpan() << std::endl;
		std::cout << "Ctr unsigned int =      max interval: " << sp.longestSpan() << std::endl;
		std::cout << std::endl;
		std::cout << "Ctr range of iterator = min interval: " << spv.shortestSpan() << std::endl;
		std::cout << "Ctr range of iterator = max interval: " << spv.longestSpan() << std::endl;
	}

	std::cout << std::endl;

	{
		Span sp = Span(10);
		try
		{
			std::cout << "try shortestSpan in Span(0): ";
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch(std::exception& ex)
		{
			std::cout << ex.what() << std::endl;
		}
		try
		{
			std::cout << "try longestSpan in Span(0): ";
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(std::exception& ex)
		{
			std::cout << ex.what() << std::endl;
		}

		std::cout << std::endl;
		sp.addNumber(1);

		try
		{
			std::cout << "try shortestSpan in Span(1): ";
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch(std::exception& ex)
		{
			std::cout << ex.what() << std::endl;
		}
		try
		{
			std::cout << "try longestSpan in Span(1): ";
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(std::exception& ex)
		{
			std::cout << ex.what() << std::endl;
		}

		std::cout << std::endl;

		try
		{
			std::cout << "try addNumber in full Span: ";
			for (unsigned int i = 0; i < 12; i++)
				sp.addNumber(i);
			std::cout << "Success" << std::endl;
		}
		catch(std::exception& ex)
		{
			std::cout << ex.what() << std::endl;
		}
	}

	{
		Span sp = Span(1000);

		for (unsigned int i = 0; i < 1000; i++)
		{
			srand(clock());
			sp.addNumber(rand());
		}
		std::cout << std::endl;
		std::cout << "Test with random Span(1000):" << std::endl;
		std::cout << "min interval: " << sp.shortestSpan() << std::endl;
		std::cout << "max interval: " << sp.longestSpan() << std::endl;
	}
	{
		Span sp = Span(10000);

		for (unsigned int i = 0; i < 10000; i++)
		{
			srand(clock());
			sp.addNumber(rand());
		}
		std::cout << std::endl;
		std::cout << "Test with random Span(10000):" << std::endl;
		std::cout << "min interval: " << sp.shortestSpan() << std::endl;
		std::cout << "max interval: " << sp.longestSpan() << std::endl;
	}
	{
		Span sp = Span(100000);

		for (unsigned int i = 0; i < 10000; i++)
		{
			srand(clock());
			sp.addNumber(rand());
		}
		std::cout << std::endl;
		std::cout << "Test with random Span(100000):" << std::endl;
		std::cout << "min interval: " << sp.shortestSpan() << std::endl;
		std::cout << "max interval: " << sp.longestSpan() << std::endl;
	}

	return 0;
}