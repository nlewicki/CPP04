/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 12:17:08 by nlewicki          #+#    #+#             */
/*   Updated: 2024/12/09 12:34:34 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	std::cout << "Cat designed" << std::endl;
}

Cat::Cat(const Cat & src) : Animal(src)
{
	*this = src;
	std::cout << "Cat copied" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destroyed" << std::endl;
}

Cat & Cat::operator=(const Cat &rhs)
{
	if (this != &rhs)
	{
		Animal::operator=(rhs);
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Miaou miaou" << std::endl;
}
