/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:21:30 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:21:31 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include <cstdlib>

void	aanimalsTrhinks( AAnimal** Aanimals, int N )
{
	for (int i = 0; i < N; i++)
	{
		std::cout << "Animal " << i << " is a " << Aanimals[i]->getType() << " and makes: ";
		Aanimals[i]->makeSound();
		std::cout << Aanimals[i]->getType() << " " << i << " also think in: " << std::endl;
		for (int j = 0; j < 5; j++)
			std::cout << Aanimals[i]->getIdeasBrain( rand() % 100 ) << std::endl;
		std::cout << std::endl;
	}
}

void	makeIdeas( AAnimal** Aanimal, int N )
{
	std::string	idea;

	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < 100; j++)
		{
			idea = "Idea ";
			idea.push_back('0' + j / 10);
			idea.push_back('0' + j % 10);
			idea += " of de " + Aanimals[i]->getType() + " number ";
			idea.push_back('0' + i / 10);
			idea.push_back('0' + i % 10);
			idea += " is [ anything ]";
			Aanimals[i]->setIdeasBrain(j, idea);
		}
	}
}

void	makeAAnimals( AAnimal** Aanimals, int N )
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
			Aanimals[index] = new Dog();
		else
			Aanimals[index] = new Cat();
	}
}

int main()
{
	int N = 10;
	AAnimal *Aanimals[10];

	makeAAnimals(Aanimals, N);
	makeIdeas(Aanimals, N);

	std::cout << std::endl;
	std::cout << std::endl;

	aanimalsTrhinks(Aanimals, N);

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "---------------------------------------" << std::endl;

	Cat *cat = (Cat *)Aanimals[0];
	Dog *dog = (Dog *)Aanimals[3];

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
		delete Aanimals[i];

	//AAnimal animal;

	return 0;
}
