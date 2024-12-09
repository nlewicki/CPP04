/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 12:17:36 by nlewicki          #+#    #+#             */
/*   Updated: 2024/12/09 14:45:24 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal designed" << std::endl;
}

Animal::Animal(const Animal & src)
{
	*this = src;
}

Animal::~Animal()
{
	std::cout << "Animal destroyed" << std::endl;
}

Animal & Animal::operator=(const Animal &rhs)
{
	if (this != &rhs)
	{
		setType(rhs.getType());
	}
	return *this;
}

void	Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}

void	Animal::setType(std::string type)
{
	this->type = type;
}

std::string	Animal::getType() const
{
	return type;
}
