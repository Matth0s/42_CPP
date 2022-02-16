/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:20:44 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:20:45 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include <cstdlib>

void	animalsTrhinks( Animal** animals, int N )
{
	for (int i = 0; i < N; i++)
	{
		std::cout << "Animal " << i << " is a " << animals[i]->getType() << " and makes: ";
		animals[i]->makeSound();
		std::cout << animals[i]->getType() << " " << i << " also think in: " << std::endl;
		for (int j = 0; j < 5; j++)
			std::cout << animals[i]->getIdeasBrain( rand() % 100 ) << std::endl;
		std::cout << std::endl;
	}
}

void	makeIdeas( Animal** animals, int N )
{
	std::string	idea;

	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < 100; j++)
		{
			idea = "Idea ";
			idea.push_back('0' + j / 10);
			idea.push_back('0' + j % 10);
			idea += " of de " + animals[i]->getType() + " number ";
			idea.push_back('0' + i / 10);
			idea.push_back('0' + i % 10);
			idea += " is [ anything ]";
			animals[i]->setIdeasBrain(j, idea);
		}
	}
}

void	makeAnimals( Animal** animals, int N )
{
	int indices[N];
	int index;
	int i;
	int j;

	for (i = 0; i < N; i++)
	{
		index = rand() % N;
		j = -1;
		while(++j < i)
		{
			if (indices[j] == index)
			{
				index = (index + 1) % N;
				j = -1;
			}
		}
		indices[i] = index;
		if (i < N/2)
			animals[index] = new Dog();
		else
			animals[index] = new Cat();
	}
}

int main()
{
	int N = 10;
	Animal *animals[10];

	makeAnimals(animals, N);
	makeIdeas(animals, N);

	std::cout << std::endl;
	std::cout << std::endl;

	animalsTrhinks(animals, N);

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "---------------------------------------" << std::endl;

	Cat *cat = (Cat *)animals[0];
	Dog *dog = (Dog *)animals[3];

	Cat copyCat(*cat);
	Dog copyDog(*dog);

	std::cout << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < 5; i++)
	{
		std::cout << copyCat.getIdeasBrain( i ) << std::endl;
		std::cout << cat->getIdeasBrain( i ) << std::endl;
		std::cout << std::endl;
		std::cout << copyDog.getIdeasBrain( i ) << std::endl;
		std::cout << dog->getIdeasBrain( i ) << std::endl;
		std::cout << std::endl;
	}

	std::cout << "---------------------------------------" << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < N; i++ )
		delete animals[i];


	return 0;
}
