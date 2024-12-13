/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 11:48:41 by nlewicki          #+#    #+#             */
/*   Updated: 2024/12/13 12:19:35 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice default constructor" << std::endl;
}

Ice::Ice(const Ice& original) : AMateria(original)
{
	std::cout << "Ice copy constructor" << std::endl;
}

Ice& Ice::operator=(const Ice& original)
{
	std::cout << "Ice copy assignment operator" << std::endl;
	AMateria::operator=(original);
	return *this;
}

Ice::~Ice()
{
	std::cout << "Ice destructor" << std::endl;
}

AMateria* Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
