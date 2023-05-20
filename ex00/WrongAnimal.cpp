/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:01:48 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/20 14:30:40 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	_type = "default";
	_sound = "default";
	std::cout << "WrongAnimal default constructor called " << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string type, std::string sound) : _type(type), _sound(sound)
{
	std::cout << "WrongAnimal constructor called " << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal &toCopy)
{
	std::cout << "WrongAnimal copy constructor called " << std::endl;
	if (this != &toCopy)
		*this = toCopy;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called " << std::endl;
	return ;
}

WrongAnimal	&WrongAnimal::operator = (WrongAnimal &toCopy)
{
	_type = toCopy._type;
	_sound = toCopy._sound;
	return (*this);
}

std::string WrongAnimal::getType(void) const
{
	return (_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << _sound << std::endl;
}

