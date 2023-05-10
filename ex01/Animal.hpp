/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:02:33 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/10 13:01:59 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{
	protected:
		std::string	_type;
		std::string	_sound;

	public:
		Animal(void);
		Animal(std::string type, std::string sound);
		Animal(Animal &toCopy);
		virtual ~Animal(void);

		virtual Animal &operator = (Animal &toCopy);

		std::string	getType(void) const;
		std::string	getSound(void) const;
		void		makeSound(void) const;
		virtual Brain		*getBrain(void) const = 0;
};

#endif
