/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharifi <msharifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:03:56 by msharifi          #+#    #+#             */
/*   Updated: 2023/05/12 14:46:33 by msharifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int main()
{
	Character Shanley("Shanley");
	Character Manu("Manu");
	AMateria *tmp;

	tmp = new Ice();
	Shanley.equip(tmp);
	tmp = new Cure();
	Shanley.equip(tmp);
	tmp = new Ice();
	Shanley.equip(tmp);
	tmp = new Cure();
	Shanley.equip(tmp);
	tmp = new Cure();
	// Shanley.equip(tmp);
	// Shanley.printInventory();

	// std::cout << std::endl;

	// Shanley.unequip(0);
	Shanley.printInventory();


	// ICharacter *bob = new Character("bob");
	// Shanley.use(2, Shanley);
	// Shanley.use(3, Shanley);

	// // ne doit rien faire
	// Shanley.use(5, *bob);
	// Shanley.use(0, *bob);

	std::cout << "Manu : ";
	Manu.printInventory();
	Manu.equip(tmp);
	// Manu = Shanley;
	Manu.unequip(0);
	Manu.unequip(2);
	Manu.use(2, Shanley);
	Manu.use(3, Shanley);
	Manu.printInventory();
	Shanley.printInventory();
	// delete bob;
	return (0);
}