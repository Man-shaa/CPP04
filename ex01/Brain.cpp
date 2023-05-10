/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:41:08 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/10 12:56:25 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called " << std::endl;
	return ;
}

Brain::Brain(Brain &toCopy)
{
	std::cout << "Brain copy constructor called " << std::endl;
	if (this != &toCopy)
		*this = toCopy;
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called " << std::endl;
	return ;
}

Brain	&Brain::operator = (Brain &toCopy)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = toCopy.ideas[i];
	return (*this);
}
