/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:27:10 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/12 13:34:39 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_inventory[4];

	public:
		MateriaSource(void);
		MateriaSource(MateriaSource &toCopy);
		~MateriaSource(void);

		MateriaSource &operator = (MateriaSource &toCopy);

		// void learnMateria(AMateria *toCopy);
		// AMateria* createMateria(std::string const &type);
};

#endif
