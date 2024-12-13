/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 11:48:20 by nlewicki          #+#    #+#             */
/*   Updated: 2024/12/13 12:12:20 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("default")
{
	std::cout << "Character default constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
}

Character::Character(const std::string& name) : _name(name)
{
	std::cout << "Character constructor" << " name: " << _name << std::endl;
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
}

Character::Character(const Character& original)
{
	std::cout << "Character copy constructor" << std::endl;
	*this = original;
}

Character& Character::operator=(const Character& original)
{
	std::cout << "Character copy assignment operator" << std::endl;
	_name = original._name;
	for (int i = 0; i < 4; i++)
		_materias[i] = original._materias[i];
	return *this;
}

Character::~Character()
{
	std::cout << "Character destructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i])
			delete _materias[i];
	}
}

std::string const & Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_materias[i])
		{
			_materias[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4 || !_materias[idx])
		return ;
	_materias[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4 || !_materias[idx])
		return ;
	_materias[idx]->use(target);
}

AMateria* Character::getMateria(int idx)
{
	if (idx < 0 || idx >= 4)
		return NULL;
	return _materias[idx];
}
