/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 12:17:08 by nlewicki          #+#    #+#             */
/*   Updated: 2024/12/09 15:34:22 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	_brain = new Brain();
	type = "Cat";
	std::cout << "Cat designed" << std::endl;
}

Cat::Cat(const Cat & src) : Animal(src)
{
	_brain = new Brain(*src._brain);
	std::cout << "Cat copied" << std::endl;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat destroyed" << std::endl;
}

Cat & Cat::operator=(const Cat &rhs)
{
	if (this != &rhs)
	{
		Animal::operator=(rhs);
		delete _brain;
		_brain = new Brain(*rhs._brain);
	}
	return *this;
}

std::string Cat::getIdea(int index) const
{
	if (index >= 0 && index < 100)
		return _brain->ideas[index];
	return "";
}

void Cat::setIdea(int index, const std::string& idea)
{
	if (index >= 0 && index < 100)
		_brain->ideas[index] = idea;
}

void Cat::makeSound() const
{
	std::cout << "Miaou miaou" << std::endl;
}
