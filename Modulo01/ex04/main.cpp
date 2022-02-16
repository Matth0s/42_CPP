/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:43:58 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/13 21:43:59 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

void	writeFile( std::ofstream &fileOut, std::string newText )
{
	fileOut << newText;
	fileOut.close();
}

void	replaceText( std::string oldText, std::string &newText, 
					std::string s1, std::string s2 )
{
	size_t index;

	while (oldText.find( s1 ) != std::string::npos)
	{
		index = oldText.find( s1 );						
		newText.append( oldText.substr( 0, index ) );						
		newText.append( s2 );
		oldText = oldText.substr( index + s1.size(), oldText.size() );
	}												
	newText.append( oldText );
}

void readFile( std::ifstream &fileIn, std::string &oldText )
{
	std::stringstream temp;
	temp << fileIn.rdbuf();
	oldText = temp.str();
	fileIn.close();
}

int	openFiles( std::ifstream &fileIn, std::ofstream &fileOut, std::string file )
{
	fileIn.open( file.c_str(), std::ifstream::in );
	if (!(fileIn.is_open()))
	{
		std::cout << file << " opening failed" << std::endl;
		return (1);
  	}
	file.append( ".replace" );
  	fileOut.open( file.c_str(), std::ofstream::out | std::ofstream::trunc );
  	if (!(fileOut.is_open()))
  	{
		std::cout << file << " opening failed" << std::endl;
		fileIn.close();
		return (1);
  	}
	return (0);
}

void	sedIsForLosers( std::string file, std::string s1, std::string s2 )
{
	std::ifstream	fileIn;
  	std::ofstream	fileOut;
	std::string		oldText;
	std::string		newText;

	if (openFiles( fileIn, fileOut, file ))
		return ;
 	readFile( fileIn, oldText );
	replaceText( oldText, newText, s1, s2 );
	writeFile( fileOut, newText );
}


int main ( int argc, char *argv[] )
{
	if (argc != 4)
	{
		std::cout << "Required tree parameters: file, string 1 and string 2";
		std::cout << std::endl;
		return (1);
	}
	sedIsForLosers(argv[1], argv[2], argv[3]);
	return (0);
}
