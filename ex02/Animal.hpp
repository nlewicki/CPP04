/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 12:17:42 by nlewicki          #+#    #+#             */
/*   Updated: 2024/12/13 12:47:07 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected: // protected otherwise the derived class will not have access to it
		std::string	type;

	public:
		Animal();
		Animal(const Animal & src);
		virtual ~Animal(); // virtual otherwise the destructor of the derived class will not be called
		Animal &	operator=(const Animal &rhs);

		virtual void	makeSound() const = 0; // pure virtual function, the derived class must implement it
		void			setType(std::string type);
		std::string		getType() const;
};

#endif
