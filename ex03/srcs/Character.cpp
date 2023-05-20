/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:05:57 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/20 15:01:26 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	std::cout << "Character default constructor called" << std::endl;
	_name = "Shanon le predateur";
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	for (int i = 0; i < 5; i++) 
		_floor[i] = NULL;
	return ;
}

Character::Character(std::string const &name) : _name(name)
{
	std::cout << "Character constructor called" << std::endl;
	for (int i = 0; i < 4; i++) 
		_inventory[i] = NULL;
	for (int i = 0; i < 5; i++) 
		_floor[i] = NULL;
}

Character::Character(Character &toCopy)
{
	std::cout << "Character copy constructor called" << std::endl;
	if (this != &toCopy)
		*this = toCopy;
}

Character::~Character(void)
{
	std::cout << "Character default destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
		{
			delete (_inventory[i]);
			_inventory[i] = NULL;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		if (_floor[i] != NULL)
		{
			delete (_floor[i]);
			_floor[i] = NULL;
		}
	}
	return ;
}

void	Character::equip(AMateria	*m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			return ;
		}
	}
	std::cout << std::endl << "No more space in inventory" << std::endl;
	delete (m);
	m = NULL;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4 || _inventory[idx] == NULL)
		return ;
	for (int i = 0; i < 5; i++)
	{
		if (_floor[i] == NULL)
		{
			_floor[i] = _inventory[idx];
			_inventory[idx] = NULL;
			return ;
		}
	}
	std::cout << std::endl << "No more space on the floor" << std::endl;
	delete (_inventory[idx]);
	_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && _inventory[idx] != NULL)
		_inventory[idx]->use(target);
}

Character &Character::operator = (Character &toCopy)
{
	std::cout << "Character assignment operator called" << std::endl << std::endl;
	_name = toCopy._name;
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
	for (int i = 0; i < 5; i++)
	{
		if (_floor[i])
		{
			delete (_floor[i]);
			_floor[i] = NULL;
		}
		if (toCopy._floor[i])
			_floor[i] = toCopy._floor[i]->clone();
	}
	return (*this);
}

void	Character::printInventory(void)
{
	std::cout << _name << " - Inventory : " << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			std::cout << "[" << i << "]" << _inventory[i]->getType() << std::endl; 
	}
	std::cout << "Floor : " << std::endl;
	for (int i = 0; i < 5; i++)
	{
		if (_floor[i])
			std::cout << "[" << i << "]" << _floor[i]->getType() << std::endl; 
	}
	std::cout << std::endl;
}

std::string	const &Character::getName(void) const
{
	return (_name);
}
