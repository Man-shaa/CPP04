/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:02:19 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/05 16:03:49 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("default"), _sound("default")
{
	std::cout << "Animal default constructor called " << std::endl;
	return ;
}

Animal::Animal(std::string type, std::string sound) : _type(type), _sound(sound)
{
	std::cout << "Animal constructor called " << std::endl;
	return ;
}

Animal::Animal(Animal &toCopy)
{
	std::cout << "Animal copy constructor called " << std::endl;
	if (this != &toCopy)
		*this = toCopy;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called " << std::endl;
	return ;
}

Animal	&Animal::operator = (Animal &toCopy)
{
	_type = toCopy._type;
	_sound = toCopy._sound;
	return (*this);
}

std::string Animal::getType(void) const
{
	return (_type);
}

void	Animal::makeSound(void) const
{
	std::cout << _sound << std::endl;
}

