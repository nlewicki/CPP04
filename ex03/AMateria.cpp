/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 11:36:04 by nlewicki          #+#    #+#             */
/*   Updated: 2024/12/13 12:07:38 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("default")
{
	std::cout << "AMateria default constructor" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "AMateria constructor" << " type: " << _type << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor" << std::endl;
}

AMateria::AMateria(AMateria const & src)
{
	*this = src;
}

AMateria& AMateria::operator=(AMateria const & rhs)
{
	_type = rhs._type;
	return *this;
}

std::string const & AMateria::getType() const
{
	return _type;
}

void AMateria::use(ICharacter& target)
{
	std::cout <<  "* AMateria of type " << _type << " is used against target " << target.getName() << " *" << std::endl;
}
