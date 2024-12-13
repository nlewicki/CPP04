/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 12:16:59 by nlewicki          #+#    #+#             */
/*   Updated: 2024/12/13 12:45:42 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	// Animal* animal = new Animal();
	Dog* originalDog = new Dog();
	originalDog->setIdea(0, "I want to play fetch");
	originalDog->setIdea(1, "Treat time is the best");

	std::cout << "Original dog's first idea: " << originalDog->getIdea(0) << std::endl;

	Dog* copiedDog = new Dog(*originalDog);
	std::cout << "Copied dog's first idea: " << copiedDog->getIdea(0) << std::endl;

	// Modify original dog's idea
	originalDog->setIdea(0, "I changed my mind");

	// Verify deep copy
	std::cout << "Original dog's first idea after change: " << originalDog->getIdea(0) << std::endl;
	std::cout << "Copied dog's first idea (should remain unchanged): " << copiedDog->getIdea(0) << std::endl;

	delete originalDog;
	delete copiedDog;
	// delete animal;

	return 0;
}
