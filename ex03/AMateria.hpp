/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 11:35:56 by nlewicki          #+#    #+#             */
/*   Updated: 2024/12/13 12:06:48 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria(); // Default constructor
		AMateria(std::string const & type); // Constructor
		virtual ~AMateria(); // Destructor (virtual, because we have virtual methods)
		AMateria(AMateria const & src); // Copy constructor
		AMateria& operator=(AMateria const & rhs); // Copy assignment operator

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0; // doesnt need to be implemented in AMateria.cpp, but in derived classes
		virtual void use(ICharacter& target);
};

#endif
