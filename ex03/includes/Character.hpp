/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:05:03 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/15 14:39:55 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"

class Character : public ICharacter
{
	protected:
		AMateria	*_inventory[4];
		AMateria	*_floor[5];
		std::string	_name;

	public:
		Character(std::string const &name);
		Character(void);
		Character(Character &toCopy);
		~Character(void);

		virtual Character &operator = (Character &toCopy);

		void		printInventory(void);
		void		equip(AMateria *m);
		void		unequip(int idx);
		void		use(int idx, ICharacter &target);
		std::string const &getName() const;
};

#endif
