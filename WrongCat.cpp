/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 12:30:43 by nlewicki          #+#    #+#             */
/*   Updated: 2024/12/09 12:38:51 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat";
	std::cout << "WrongCat designed" << std::endl;
}

WrongCat::WrongCat(const WrongCat & src) : WrongAnimal(src)
{
	*this = src;
	std::cout << "WrongCat copied" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destroyed" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat &rhs)
{
	if (this != &rhs)
	{
		WrongAnimal::operator=(rhs);
	}
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongMiaou miaou" << std::endl;
}
