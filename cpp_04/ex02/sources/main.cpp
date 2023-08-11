/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:30:31 by mibernar          #+#    #+#             */
/*   Updated: 2023/08/11 20:24:55 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	
	// const Animal k;//class cant be instantiable.
	// const Animal* l = new Animal();//class cant be instantiable.
	const Animal* j = new Dog();
    const Animal* i = new Cat();
	
    delete j;//should not create a leak
    delete i;
	
	std::cout << std::endl;
	std::cout << std::endl;
	
    Dog basic;
    {
        Dog tmp = basic;
    }
	
	std::cout << std::endl;
	std::cout << std::endl;

    const Animal* a = new Dog();
    const Animal* b = new Cat();
    std::cout << a->getType() << " " << std::endl;
    std::cout << b->getType() << " " << std::endl;
    a->makeSound();
    b->makeSound();

    delete a;
    delete b;

	std::cout << std::endl;
	std::cout << std::endl;

    Cat c;
    Cat d;
    c = d;
    std::cout << c.getType() << std::endl;
		
	std::cout << std::endl;
	std::cout << std::endl;

	int	x = 0;
    const Animal	*animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};

    while (x < 4)
	{
        delete animals[x];
		x++;
    }

	return (0);
}
