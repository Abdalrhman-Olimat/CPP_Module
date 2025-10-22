#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    dog->makeSound();
    cat->makeSound();

    delete dog;
    delete cat;

    const WrongAnimal* wrongCat = new WrongCat();
    wrongCat->makeSound();
    delete wrongCat;

    return 0;
}
