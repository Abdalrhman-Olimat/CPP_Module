#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
    Brain* brain;
public:
    Dog();
    Dog(const std::string& type);
    Dog(const Dog& other);
    Dog& operator=(const Dog& other);
    Brain getBrain() const;
    void setBrain(const Brain& obj);
    virtual ~Dog();
    virtual void makeSound() const;
};

#endif