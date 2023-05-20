/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:05:50 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/20 14:35:59 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main( void )
{
	Animal	*animals[8];
	Brain	*brain;

	for (int i = 0; i < 8; i++)
	{
		if (i < 8 / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << animals[i]->getType() << std::endl;
		std::cout << std::endl;
	}
	brain = animals[3]->getBrain();
	brain->ideas[0] = "fuck manu";
	brain->ideas[1] = "Pourquoi ?";
	brain->ideas[2] = "Je crois pas qu'il y ait de bonne ou de mauvaise siuation...";
	brain->ideas[3] = "grosse ambiance";
	std::cout<<"animal 3 = ";
	std::cout << animals[3]->getBrain()->ideas[0] << std::endl;

	*animals[5] = *animals[3];
	std::cout<<"animal 5 = ";
	std::cout << animals[5]->getBrain()->ideas[2] << std::endl;

	animals[5]->getBrain()->ideas[2] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	std::cout << animals[3]->getBrain()->ideas[2] << std::endl;
	std::cout << animals[5]->getBrain()->ideas[2] << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < 8; i++)
		delete animals[i];
	std::cout << std::endl;

	Dog dog1;
	Dog dog2;

	std::cout<<std::endl;
	dog1.getBrain()->ideas[12]="aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	std::cout << dog1.getBrain()->ideas[12] << std::endl;

	dog2 = dog1;
	dog1.getBrain()->ideas[12] = "Pourquoi ?";
	std::cout << dog2.getBrain()->ideas[12] << std::endl;
	std::cout<<std::endl;

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j; // should not create a leak
	delete i;
	return (0);
}