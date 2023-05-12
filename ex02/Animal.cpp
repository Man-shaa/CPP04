/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:02:19 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/10 13:27:41 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

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

std::string Animal::getSound(void) const
{
	return (_sound);
}

void	Animal::makeSound(void) const
{
	std::cout << _sound << std::endl;
}

