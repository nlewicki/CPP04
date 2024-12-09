/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 12:35:25 by nlewicki          #+#    #+#             */
/*   Updated: 2024/12/09 12:37:06 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
}

WrongAnimal::WrongAnimal(const WrongAnimal & src)
{
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &rhs)
{
	if (this != &rhs)
	{
		setType(rhs.getType());
	}
	return *this;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound" << std::endl;
}

void	WrongAnimal::setType(std::string type)
{
	this->type = type;
}

std::string	WrongAnimal::getType() const
{
	return type;
}
