/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:40:33 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/05 17:48:05 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	protected:

	public:
		Brain(void);
		// Brain(std::string type, std::string sound);
		Brain(Brain &toCopy);
		~Brain(void);

		Brain &operator = (Brain &toCopy);

		std::string	ideas[100];
};

#endif
