/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:30:41 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/16 08:08:49 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

class NumberNotFound : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("Number not in container!");
		}
};

template<typename T>
typename T::iterator	easyfind( T& container, int number )
{
	typename T::iterator it;

	it = std::find( container.begin(), container.end(), number);
	if (it == container.end())
		throw NumberNotFound();
	return (it);
};

#endif
