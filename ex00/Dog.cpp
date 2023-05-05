/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:11:31 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/05 16:12:41 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	_type = "Dog"; 
	_sound = "Wouaf";
	std::cout << "Dog default constructor called " << std::endl;
	return ;
}

Dog::Dog(std::string type, std::string sound) : Animal(type, sound)
{
	std::cout << "Dog constructor called " << std::endl;
	return ;
}

Dog::Dog(Dog &toCopy)
{
	std::cout << "Dog copy constructor called " << std::endl;
	if (this != &toCopy)
		*this = toCopy;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called " << std::endl;
	return ;
}

Dog	&Dog::operator = (Dog &toCopy)
{
	_type = toCopy._type;
	_sound = toCopy._sound;
	return (*this);
}
