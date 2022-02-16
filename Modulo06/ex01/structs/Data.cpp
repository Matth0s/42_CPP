/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:28:10 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:28:11 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data( void )
	: one(1), two(2), tree(3), a('a'), b('b'), c('c')
{
	return ;
}

std::ostream&	operator<<( std::ostream& output, const Data& src )
{
	output << "int one: " << src.one << "\n";
	output << "int two: " << src.two << "\n";
	output << "int tree: " << src.tree << "\n";
	output << "char  a: " << src.a << "\n";
	output << "char  b: " << src.b << "\n";
	output << "char  c: " << src.c;
	return (output);
}
