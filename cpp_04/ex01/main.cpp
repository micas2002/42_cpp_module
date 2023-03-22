/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:30:31 by mibernar          #+#    #+#             */
/*   Updated: 2023/01/30 18:51:30 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal* j = new Dog();
    const Animal* i = new Cat();

	
    delete j;//should not create a leak
    delete i;

	Dog*	dog = new Dog();
	Dog*	dog2 = new Dog();

	dog->getBrain()->ideas[0] = "hello";
	dog->getBrain()->ideas[1] = "world";

	std::cout << "dog ideas:" << std::endl;
	for (int i = 0; i < 2; i++) std::cout << "Idea: " << dog->getBrain()->ideas[i] << std::endl;
	std::cout << std::endl;
	std::cout << "dog2 ideas" << std::endl;
	for (int i = 0; i < 2; i++) std::cout << "Idea: " << dog2->getBrain()->ideas[i] << std::endl;
	std::cout << std::endl;

	std::cout << "dog2 = dog" << std::endl;
	*dog2 = *dog;
	std::cout << std::endl;
	std::cout << "dog ideas:" << std::endl;
	for (int i = 0; i < 2; i++) std::cout << "Idea: " << dog->getBrain()->ideas[i] << std::endl;
	std::cout << std::endl;
	std::cout << "dog2 ideas" << std::endl;
	for (int i = 0; i < 2; i++) std::cout << "Idea: " << dog2->getBrain()->ideas[i] << std::endl;
	std::cout << std::endl;

	std::cout << "dog idea 2 is cat" << std::endl;
	dog->getBrain()->ideas[1] = "cat";
	for (int i = 0; i < 2; i++) std::cout << "Idea: " << dog->getBrain()->ideas[i] << std::endl;
	std::cout << std::endl;
	std::cout << "dog2 ideas" << std::endl;
	for (int i = 0; i < 2; i++) std::cout << "Idea: " << dog2->getBrain()->ideas[i] << std::endl;
	std::cout << std::endl;

	delete dog;
	delete dog2;

	int	x = 0;
    const Animal* animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};

    while (x < 4)
	{
        delete animals[x];
		x++;
    }

    return 0;
}
