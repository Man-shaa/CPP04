/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:22:39 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/20 14:57:42 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"


MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
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
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
		{
			delete (_inventory[i]);
			_inventory[i] = NULL;
		}
	}
	return ;
}

MateriaSource &MateriaSource::operator = (MateriaSource &toCopy)
{
	std::cout << "MateriaSource assignment operator called" << std::endl << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
		{
			delete (_inventory[i]);
			_inventory[i] = NULL;
		}
		if (toCopy._inventory[i])
			_inventory[i] = toCopy._inventory[i]->clone();
	}
	return (*this);
}


void MateriaSource::learnMateria(AMateria *toCopy)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = toCopy;
			return ;
		}
	}
	delete (toCopy);
	toCopy = NULL;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	if (type.compare("ice"))
		return (new Ice());
	else if (type.compare("cure"))
		return (new Cure());
	else
		return (0);
}
