#include "Animals.hpp"

Animal::Animal() : _type() {
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type) {
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& src) {
	*this = src;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& src) {
	if (this != &src)
		setType(src.getType());
	std::cout << "Animal assignment operator called" << std::endl;
	return *this;
}

std::string Animal::getType() const {
	return _type;
}

void Animal::makeSound() const {
	std::cout << "Animal sound" << std::endl;
}

void Animal::setType(std::string type) {
	_type = type;
}