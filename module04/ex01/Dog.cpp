#include "Dog.hpp"

Dog::Dog(): Animal("Dog") {
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const std::string &type): Animal(type) {
    std::cout << "Dog parameterized constructor called" << std::endl;
}

Dog::Dog(const Dog &other): Animal(other) {
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
    if (this != &other) {
        Animal::operator=(other);
    }
    std::cout << "Dog assignment operator called" << std::endl;
    return *this;
}

Brain	Dog::getBrain() const
{
	return (*this->brain);
}

void	Dog::setBrain(const Brain& obj)
{
	for (int i = 0; i < 100; i++)
		this->brain->setIdea(i, obj.getIdea(i));
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Woof!" << std::endl;
}
