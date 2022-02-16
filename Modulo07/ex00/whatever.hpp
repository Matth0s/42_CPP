/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:29:27 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/16 08:08:49 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template<typename T>
void	swap( T& x, T& y)
{
	T z;

	z = x;
	x = y;
	y = z;
};

template<typename T>
T		max( T x, T y)
{
	if (x >= y)
		return (x);
	return (y);
};

template<typename T>
T		min( T x, T y)
{
	if (x <= y)
		return (x);
	return (y);
};

#endif
