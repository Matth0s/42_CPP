/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:29:18 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:29:18 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

template<typename T>
class Teste
{
	private:

		T	_a;
		T	_b;

	public:

		Teste(T a, T b): _a(a), _b(b) { this->print(); };

		void	print( void )
		{
			std::cout << "a = " << this->_a << ", b = " << this->_b << std::endl;
			::swap( this->_a, this->_b );
			std::cout << "swap" << std::endl;
			std::cout << "a = " << this->_a << ", b = " << this->_b << std::endl;
			std::cout << "min( a, b ) = " << ::min( this->_a, this->_b ) << std::endl;
			std::cout << "max( a, b ) = " << ::max( this->_a, this->_b ) << std::endl;
			std::cout << std::endl;
		};
};


int main( void )
{
	{
		std::cout << "teste with int: " << std::endl;
		Teste<int>			teste(2, 3);
	}
	{
		std::cout << "teste with std::string: " << std::endl;
		Teste<std::string>	teste("chaine1", "chaine2");
	}
	{
		std::cout << "teste with float: " << std::endl;
		Teste<float>		teste(3.45f, 5.88f);
	}
	{
		std::cout << "teste with char: " << std::endl;
		Teste<char>			teste('m', 'n');
	}
	{
		std::cout << "teste with double: " << std::endl;
		Teste<double>		teste(4334.4654, 3434.76759);
	}

	return (0);
}