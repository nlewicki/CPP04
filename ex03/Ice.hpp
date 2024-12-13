/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 11:48:48 by nlewicki          #+#    #+#             */
/*   Updated: 2024/12/13 12:18:35 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice(const Ice& original);
		Ice& operator=(const Ice& original);
		~Ice();

		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif
