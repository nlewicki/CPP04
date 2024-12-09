/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 12:16:59 by nlewicki          #+#    #+#             */
/*   Updated: 2024/12/09 12:43:12 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wrong = new WrongCat();
	const WrongAnimal* wrongmeta = new WrongAnimal();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << wrong->getType() << " " << std::endl;
	std::cout << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound(); //will output the dog sound!
	wrong->makeSound(); //will output the wrong cat sound!
	std::cout << std::endl;

	meta->makeSound();
	wrongmeta->makeSound(); //will output the wrong animal sound!

	delete meta;
	delete j;
	delete i;
	delete wrong;
	delete wrongmeta;

	return 0;
}
