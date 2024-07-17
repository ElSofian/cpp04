#include "../inc/Animal.hpp"

Animal::Animal() :type("Default Animal") {
    std::cout << "(Default Animal Constructor)" << std::endl;
}

Animal::Animal(const Animal &a) {
    *this = a;
}

Animal &Animal::operator=(const Animal &a) {
    if (this != &a)
        type = a.type;
    return (*this);
}

Animal::~Animal() {
	std::cout << type << " destroyed (Parent class)" << std::endl;
}

void Animal::setType(std::string str) {
    type = str;
}

std::string Animal::getType() const {
    return type;
}

void Animal::makeSound() const {
	std::cout << "random animal sound" << std::endl;
}
