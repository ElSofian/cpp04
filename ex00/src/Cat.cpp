#include "../inc/Cat.hpp"

Cat::Cat(): Animal() {
    type = "Cat";
}

Cat::Cat(const Cat &c): Animal() {
    if (this != &c)
        *this = c;
}

Cat& Cat::operator=(const Cat &c) {
    if (this != &c)
        type = c.type;
    return (*this);
}

Cat::~Cat() {
    std::cout << type << " was destroyed" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "meow" << std::endl;
}