#include "../inc/Dog.hpp"

Dog::Dog(): Animal() {
    type = "Dog";
}

Dog::Dog(const Dog &d): Animal() {
    if (this != &d)
        *this = d;
}

Dog &Dog::operator=(const Dog& d) {
    if (this != &d)
        type = d.type;
    return (*this);
}

Dog::~Dog() {
    std::cout << type << " was destroyed" << std::endl;
}

void    Dog::makeSound() const {
    std::cout << "bark" << std::endl;
}