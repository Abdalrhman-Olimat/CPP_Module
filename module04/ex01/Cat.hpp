#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
    Brain* brain;
public:
    Cat();
    Cat(const std::string& type);
    Cat(const Cat& other);
    ~Cat();
    Brain getBrain() const;
    void setBrain(const Brain& obj);
    void makeSound() const;
    Cat& operator=(const Cat& other);
};

#endif