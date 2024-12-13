/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 11:43:33 by nlewicki          #+#    #+#             */
/*   Updated: 2024/12/13 12:22:02 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* _materias[4];

	public:
		MateriaSource(); // Default constructor
		MateriaSource(const MateriaSource& original); // Copy constructor
		MateriaSource& operator=(const MateriaSource& original); // Copy assignment operator
		~MateriaSource(); // Destructor

		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
};

#endif
