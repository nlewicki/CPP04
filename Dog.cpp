/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 12:17:23 by nlewicki          #+#    #+#             */
/*   Updated: 2024/12/09 12:34:38 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	type = "Dog";
	std::cout << "Dog designed" << std::endl;
}

Dog::Dog(const Dog & src) : Animal(src)
{
	*this = src;
	std::cout << "Dog copied" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destroyed" << std::endl;
}

Dog & Dog::operator=(const Dog &rhs)
{
	if (this != &rhs)
	{
		Animal::operator=(rhs);
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Wouf wouf" << std::endl;
}
