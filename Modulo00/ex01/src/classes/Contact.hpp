/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:38:01 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/16 08:08:49 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "include.hpp"

class Contact
{
	private:

		std::string	_first;
		std::string	_last;
		std::string	_nick;
		std::string	_number;
		std::string	_secret;

	public:

		Contact( void );
		~Contact( void );

		void		setFirst( void );
		void		setLast( void );
		void		setNick( void );
		void		setNumber( void );
		void		setSecret( void );

		std::string	getFirst( void );
		std::string	getLast( void );
		std::string	getNick( void );
		std::string	getNumber( void );
		std::string	getSecret( void );

};

#endif
