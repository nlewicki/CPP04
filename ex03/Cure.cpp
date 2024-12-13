/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 11:48:29 by nlewicki          #+#    #+#             */
/*   Updated: 2024/12/13 12:19:20 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure default constructor" << std::endl;
}

Cure::Cure(const Cure& original) : AMateria(original)
{
	std::cout << "Cure copy constructor" << std::endl;
}

Cure& Cure::operator=(const Cure& original)
{
	std::cout << "Cure copy assignment operator" << std::endl;
	AMateria::operator=(original);
	return *this;
}

Cure::~Cure()
{
	std::cout << "Cure destructor" << std::endl;
}

AMateria* Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
