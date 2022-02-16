/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:20:00 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:20:01 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* animal = new Animal();
	const Animal* cat = new Dog();
	const Animal* dog = new Cat();

	std::cout << std::endl;

	std::cout << animal->getType() << " makes: ";
	animal->makeSound();

	std::cout << cat->getType() << " makes: ";
	cat->makeSound();

	std::cout << dog->getType() << " makes: ";
	dog->makeSound();

	std::cout << std::endl;

	delete animal;
	delete cat;
	delete dog;

	std::cout << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << std::endl;

	const WrongAnimal* wronganimal = new WrongAnimal();
	const WrongAnimal* wrongcat = new WrongDog();
	const WrongAnimal* wrongdog = new WrongCat();

	std::cout << std::endl;

	std::cout << wronganimal->getType() << " makes: ";
	wronganimal->makeSound();

	std::cout << wrongcat->getType() << " makes: ";
	wrongcat->makeSound();

	std::cout << wrongdog->getType() << " makes: ";
	wrongdog->makeSound();

	std::cout << std::endl;

	delete wronganimal;
	delete wrongcat;
	delete wrongdog;

	return 0;
}