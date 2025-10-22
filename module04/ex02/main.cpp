#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

int main()
{
    // Animal* animals[10];
    // for (int i = 0; i < 10; i++)
    // {
    //     if (i % 2 == 0)
    //         animals[i] = new Dog();
    //     else
    //         animals[i] = new Cat();
    // }
    // for (int i = 0; i < 10; i++)
    // {
    //     animals[i]->makeSound();
    //     delete animals[i];
    // }


    Dog basic;
    {
        Dog tmp = basic;
    }

    return 0;
}