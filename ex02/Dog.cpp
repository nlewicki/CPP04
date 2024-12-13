/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 12:17:23 by nlewicki          #+#    #+#             */
/*   Updated: 2024/12/09 15:32:53 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	_brain = new Brain();
	type = "Dog";
	std::cout << "Dog designed" << std::endl;
}

Dog::Dog(const Dog & src) : Animal(src)
{
	_brain = new Brain(*src._brain);
	std::cout << "Dog copied" << std::endl;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destroyed" << std::endl;
}

Dog & Dog::operator=(const Dog &rhs)
{
	if (this != &rhs)
	{
		Animal::operator=(rhs);
		delete _brain;
		_brain = new Brain(*rhs._brain);
	}
	return *this;
}

std::string Dog::getIdea(int index) const
{
	if (index >= 0 && index < 100)
		return _brain->ideas[index];
	return "";
}

void Dog::setIdea(int index, const std::string& idea)
{
	if (index >= 0 && index < 100)
		_brain->ideas[index] = idea;
}

void Dog::makeSound() const
{
	std::cout << "Wouf wouf" << std::endl;
}
