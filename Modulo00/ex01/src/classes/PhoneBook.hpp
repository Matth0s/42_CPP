/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:38:19 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/16 08:08:49 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include "include.hpp"
# include "Contact.hpp"

class PhoneBook
{
	private:

		int		_total;
		Contact	_contacts[8];

	public:

		PhoneBook( void );
		~PhoneBook( void );

		void	add( void );
		void	search( void );

	private:

		void	_printHeader( void );
		void	_formatPrint( std::string str );
		void	_printContact( Contact contact );
};

#endif
