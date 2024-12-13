/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 11:43:11 by nlewicki          #+#    #+#             */
/*   Updated: 2024/12/13 12:13:48 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource default constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& original)
{
	std::cout << "MateriaSource copy constructor" << std::endl;
	*this = original;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& original)
{
	std::cout << "MateriaSource copy assignment operator" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i])
			delete _materias[i];
		_materias[i] = original._materias[i];
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i])
			delete _materias[i];
	}
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_materias[i])
		{
			_materias[i] = m;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] && _materias[i]->getType() == type)
			return _materias[i]->clone();
	}
	return NULL;
}
