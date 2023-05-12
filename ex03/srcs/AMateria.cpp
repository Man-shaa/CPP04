/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:05:43 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/12 13:39:33 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << "AMateria default constructor called" << std::endl;
	return ;
}

AMateria::AMateria(AMateria &toCopy)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	if (this != &toCopy)
		*this = toCopy;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria default destructor called" << std::endl;
	return ;
}

std::string const &AMateria::getType() const
{
	return (_type);
}

AMateria &AMateria::operator = (AMateria &toCopy)
{
	_type = toCopy._type;
	return (*this);
}

void	AMateria::use( ICharacter &target)
{
	(void) target;
}


