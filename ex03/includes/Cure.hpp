/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:05:13 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/12 18:28:13 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	protected:

	public:
		Cure(std::string const &type);
		Cure(void);
		Cure(Cure &toCopy);
		~Cure(void);

		virtual Cure &operator = (Cure &toCopy);

		AMateria* clone(void) const;
		void use(ICharacter& target);
};

#endif
