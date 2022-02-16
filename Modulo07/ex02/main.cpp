/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:29:50 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:29:51 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#include <cstdlib>
#include <ctime>

#define MAX_VAL 750

int main( void )
{
	{
		std::cout << "test Array<int>:\n{" << std::endl;
		Array<int>	numbers(MAX_VAL);
		int*		mirror = new int[MAX_VAL];

		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
			tmp[0] = tmp[0] + 1;
			if (tmp[0] == test[0])
				std::cout << "    deep copy fail!!" << std::endl;
			else
				std::cout << "    deep copy works!!" << std::endl;
		}

		{
			int equals = 1;
			for (int i = 0; i < MAX_VAL; i++)
			{
				if (mirror[i] != numbers[i])
				{
					equals = 0;
					std::cerr << "    didn't save the same value!!" << std::endl;
					return 1;
				}
			}
			if (equals)
				std::cout << "    the same values ​​were saved!!" << std::endl;

		}

		try
		{
			std::cout << "    numbers[-2] = 0 ==> ";
			numbers[-2] = 0;
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			std::cout << "    numbers[MAX_VAL] = 0 ==> ";
			numbers[MAX_VAL] = 0;
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = rand();
		}
		{
			int notEquals = 0;
			for (int i = 0; i < MAX_VAL; i++)
				if (mirror[i] == numbers[i])
					notEquals += 1;
			if (notEquals != MAX_VAL)
				std::cout << "    operator [] works!!" << std::endl;
			else
				std::cerr << "    operator [] fail!!" << std::endl;
		}
		std::cout << "}" << std::endl;
		delete [] mirror;
	}


	std::cout << std::endl;


	{
		std::cout << "test Array<char>:\n{" << std::endl;
		Array<char>	chars(MAX_VAL);
		char*		mirror = new char[MAX_VAL];

		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const char value = '!' + rand() % 93;
			chars[i] = value;
			mirror[i] = value;
		}
		{
			Array<char> tmp = chars;
			Array<char> test(tmp);
			tmp[0] = tmp[0] + 1;
			if (tmp[0] == test[0])
				std::cout << "    deep copy fail!!" << std::endl;
			else
				std::cout << "    deep copy works!!" << std::endl;
		}

		{
			int equals = 1;
			for (int i = 0; i < MAX_VAL; i++)
			{
				if (mirror[i] != chars[i])
				{
					equals = 0;
					std::cerr << "    didn't save the same value!!" << std::endl;
					return 1;
				}
			}
			if (equals)
				std::cout << "    the same values ​​were saved!!" << std::endl;
		}

		try
		{
			std::cout << "    chars[-2] = 'a' ==> ";
			chars[-2] = 'a';
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			std::cout << "    chars[MAX_VAL] = 'a' ==> ";
			chars[MAX_VAL] = 'a';
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			chars[i] = '!' + rand() % 93;
		}
		{
			int notEquals = 0;
			for (int i = 0; i < MAX_VAL; i++)
				if (mirror[i] == chars[i])
					notEquals += 1;
			if (notEquals != MAX_VAL)
				std::cout << "    operator [] works!!" << std::endl;
			else
				std::cerr << "    operator [] fail!!" << std::endl;
		}
		std::cout << "}" << std::endl;
		delete [] mirror;
	}

	return 0;
}