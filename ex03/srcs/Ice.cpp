/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:06:13 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/15 12:47:25 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
{
	_type = "ice";
	std::cout << "Ice default constructor called" << std::endl;
	return ;
}

Ice::Ice(Ice &toCopy)
{
	std::cout << "Ice copy constructor called" << std::endl;
	if (this != &toCopy)
		*this = toCopy;
}

Ice::~Ice(void)
{
	std::cout << "Ice default destructor called" << std::endl;
	return ;
}

Ice &Ice::operator = (Ice &toCopy)
{
	std::cout << "Ice assignment operator called" << std::endl << std::endl;
	_type = toCopy._type;
	return (*this);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}


AMateria *Ice::clone(void) const
{
	return (new Ice());
}
