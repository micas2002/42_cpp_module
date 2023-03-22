/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:30:31 by mibernar          #+#    #+#             */
/*   Updated: 2023/01/30 13:58:39 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* i = new Cat();
	const Animal* j = new Dog();

	std::cout << "I->" << i->getType() << std::endl;
	std::cout << "J->" << j->getType() << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete  meta;
	delete  j;
	delete  i;

	const WrongAnimal *wrong = new WrongAnimal();
	const WrongAnimal *wrongCat = new WrongCat();

	std::cout << "Wrong->" << wrong->getType() << std::endl;
	std::cout << "WrongCat->" << wrongCat->getType() << std::endl;
	wrong->makeSound();
	wrongCat->makeSound();
	delete  wrong;
	delete  wrongCat;

	return (0);
}
