/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:10:06 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/05 17:53:13 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*_brain;

	public:
		Dog(void);
		Dog(std::string type, std::string sound);
		Dog(Dog &toCopy);
		~Dog(void);

		Dog	&operator = (Dog &toCopy);
		virtual Brain *getBrain(void) const;
};

#endif
