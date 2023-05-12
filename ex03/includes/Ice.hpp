/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:05:21 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/12 18:27:55 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	protected:

	public:
		Ice(std::string const &type);
		Ice(void);
		Ice(Ice &toCopy);
		~Ice(void);

		virtual Ice &operator = (Ice &toCopy);

		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif
