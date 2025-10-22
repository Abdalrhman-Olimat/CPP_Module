#include "Cat.hpp"

Cat::Cat(): Animal("Cat") {
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const std::string &type): Animal(type) {
    std::cout << "Cat parameterized constructor called" << std::endl;
}

Cat::Cat(const Cat &other) {
    this->type = other.type;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
    if (this != &other) {
        this->type = other.type;
    }
    std::cout << "Cat assignment operator called" << std::endl;
    return *this;
}

Brain	Cat::getBrain() const
{
	return (*this->brain);
}

void	Cat::setBrain(const Brain& obj)
{
	for (int i = 0; i < 100; i++)
		this->brain->setIdea(i, obj.getIdea(i));
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}