/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 12:09:07 by nlewicki          #+#    #+#             */
/*   Updated: 2024/12/13 12:10:26 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CPP
# define CHARACTER_CPP

#include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria* _materias[4];

	public:
		Character(); // Default constructor
		Character(const std::string& name); // Constructor
		Character(const Character& original); // Copy constructor
		Character& operator=(const Character& original); // Copy assignment operator
		~Character(); // Destructor

		std::string const & getName() const; 
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		AMateria* getMateria(int idx);
};

#endif
