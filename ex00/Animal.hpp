/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:02:33 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/05 15:56:10 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

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

		Animal &operator = (Animal &toCopy);

		std::string	getType(void) const;
		void		makeSound(void) const;

};

#endif
