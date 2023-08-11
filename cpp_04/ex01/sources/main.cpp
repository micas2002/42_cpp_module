/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibernar <mibernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 15:23:49 by mibernar          #+#    #+#             */
/*   Updated: 2023/08/11 19:40:29 by mibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	Dog basic;
    {
        Dog tmp = basic;
    }

	// const Animal* meta = new Animal();
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // j->makeSound();
    // i->makeSound();
    // meta->makeSound();

    // delete meta;
    // delete i;
    // delete j;

    // Cat a;
    // Cat b;
    // a = b;
    // std::cout << a.getType() << std::endl;
		
	// std::cout << std::endl;
	// std::cout << std::endl;

	// const Animal	*j = new Dog();
	// const Animal	*i = new Cat();

	// std::cout << std::endl;
	// std::cout << std::endl;

	// delete j;
	// delete i;


	// int	x = 0;
    // const Animal	*animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};

    // while (x < 4)
	// {
    //     delete animals[x];
	// 	x++;
    // }

	return (0);
}