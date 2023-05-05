/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:58:14 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/05 16:05:49 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string	_type;
		std::string	_sound;

	public:
		WrongAnimal(void);
		WrongAnimal(std::string type, std::string sound);
		WrongAnimal(WrongAnimal &toCopy);
		virtual ~WrongAnimal(void);

		WrongAnimal	&operator = (WrongAnimal &toCopy);

		std::string	getType(void) const;
		void		makeSound(void) const;
};

#endif
