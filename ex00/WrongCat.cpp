/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:01:36 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/05 16:12:47 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	_type = "WrongCat"; 
	_sound = "meuuuh";
	std::cout << "WrongCat default constructor called " << std::endl;
	return ;
}

WrongCat::WrongCat(std::string type, std::string sound) : WrongAnimal(type, sound)
{
	std::cout << "WrongCat constructor called " << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat &toCopy)
{
	std::cout << "WrongCat copy constructor called " << std::endl;
	if (this != &toCopy)
		*this = toCopy;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called " << std::endl;
	return ;
}

WrongCat	&WrongCat::operator = (WrongCat &toCopy)
{
	_type = toCopy._type;
	_sound = toCopy._sound;
	return (*this);
}
