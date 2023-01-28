/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:28:18 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/28 12:44:47 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	AAnimal	* animal_array[10];
	for (unsigned int i = 0; i < 5; i++)
	{
		animal_array[i] = new Cat();
		animal_array[i + 5] = new Dog();
	}

	// IMPOSSIBLE CAR CLASSE ABSTRAITE -> NON INSTANCIABLE

	/*AAnimal* animal = new AAnimal();
	std::cout << "Hi, I am a " << animal->getType() << " and I don't have a Brain!" << std::endl;
	animal->makeSound();
	delete animal;
	std::cout << std::endl;*/

	Dog* dog = new Dog();
	std::cout << "Hi, I am a " << dog->getType() << " " << std::endl;
	dog->makeSound();
	std::cout << "I am thinking of: " << dog->getBrain()->getIdea(0) << std::endl;
	std::cout << "I have a new idea! FOOD!\n";
	dog->getBrain()->setIdea("I want to eat something. FOOD");
	std::cout << "I am thinking of: " << dog->getBrain()->getIdea(0) << std::endl;
	Dog * dog_copy = new Dog(*dog);

	std::cout << "Hi, I am a " << dog_copy->getType() << " " << std::endl;
	std::cout << "I am thinking of: " << dog_copy->getBrain()->getIdea(0) << std::endl;
	std::cout << "I have a new idea! Hunting a Cat!\n";
	dog_copy->getBrain()->setIdea("I want to hunt a Cat. Cat");
	std::cout << "I am thinking of: " << dog_copy->getBrain()->getIdea(1) << std::endl;
	dog_copy->makeSound();

	std::cout << "I am thinking of: " << dog->getBrain()->getIdea(1) << std::endl;	
	delete dog_copy;
	delete dog;
	std::cout << std::endl;

	Cat* cat = new Cat();
	std::cout << "Hi, I am a " << cat->getType() << " " << std::endl;
	std::cout << "I am thinking of: " << cat->getBrain()->getIdea(0) << std::endl;
	std::cout << "I have a new idea! FOOD!\n";
	cat->getBrain()->setIdea("I want to eat something. FOOD");
	std::cout << "I am thinking of: " << cat->getBrain()->getIdea(0) << std::endl;
	cat->makeSound();
	Cat * cat_copy = new Cat(*cat);
	delete cat;
	std::cout << "Hi, I am a " << cat_copy->getType() << " " << std::endl;
	std::cout << "I am thinking of: " << cat_copy->getBrain()->getIdea(0) << std::endl;
	std::cout << "I have a new idea! Hunting a Mouse!\n";
	cat_copy->getBrain()->setIdea("I want to hunt a Mouse. Mouse");
	std::cout << "I am thinking of: " << cat_copy->getBrain()->getIdea(1) << std::endl;
	cat_copy->makeSound();
	delete cat_copy;
	std::cout << std::endl;

	WrongAnimal* wrong_animal = new WrongAnimal();
	std::cout << "Hi, I am a " << wrong_animal->getType() << " " << std::endl;
	std::cout << "I don't have a Brain yet. :-(\n";
	wrong_animal->makeSound();
	delete wrong_animal;
	std::cout << std::endl;

	WrongAnimal* wrong_cat = new WrongCat();
	std::cout << "Hi, I am a " << wrong_cat->getType() << " " << std::endl;
	std::cout << "I don't have a Brain yet too. :-((\n";
	wrong_cat->makeSound();
	delete wrong_cat;
	std::cout << std::endl;

	for (unsigned int i = 0; i < 5; i++)
	{
		delete animal_array[i];
		delete animal_array[i + 5];
	}
	//system("leaks Abstract");
	return (0);
}