/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:06:05 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/15 12:47:31 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
{
	_type = "cure";
	std::cout << "Cure default constructor called" << std::endl;
	return ;
}

Cure::Cure(Cure &toCopy)
{
	std::cout << "Cure copy constructor called" << std::endl;
	if (this != &toCopy)
		*this = toCopy;
}

Cure::~Cure(void)
{
	std::cout << "Cure default destructor called" << std::endl;
	return ;
}

Cure &Cure::operator = (Cure &toCopy)
{
	std::cout << "Cure assignment operator called" << std::endl << std::endl;
	_type = toCopy._type;
	return (*this);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria *Cure::clone(void) const
{
	return (new Cure());
}
