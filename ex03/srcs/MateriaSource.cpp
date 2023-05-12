/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:22:39 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/10 17:47:57 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"


MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	return ;
}

MateriaSource::MateriaSource(MateriaSource &toCopy)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	if (this != &toCopy)
		*this = toCopy;
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource default destructor called" << std::endl;
	return ;
}

MateriaSource &MateriaSource::operator = (MateriaSource &toCopy)
{
	(void) toCopy; // a completer
	(void)_inventory;
	return (*this);
}


// void learnMateria(AMateria *toCopy)
// {
// 	(void)toCopy;
// }

// AMateria* createMateria(std::string const &type)
// {
// 	(void)type;
// 	if (type.compare("ice"))
// 		return (new Ice());
// 	else if (type.compare("cure"))
// 		return (new Cure());
// 	else
// 		return (0);
// }
