/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:09:54 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/10 13:04:36 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*_brain;

	public:
		Cat(void);
		Cat(std::string type, std::string sound);
		Cat(Cat &toCopy);
		~Cat(void);

		Animal &operator = (Animal &toCopy);
		Cat &operator = (Cat &toCopy);

		virtual Brain *getBrain(void) const;
};

#endif
