#include "Animals.hpp"
#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& src) : Animal(src) {
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& src) {
	if (this != &src)
		setType(src.getType());
	std::cout << "Cat assignment operator called" << std::endl;
	return *this;
}

std::string Cat::getType() const {
	return _type;
}

void Cat::makeSound() const {
	std::cout << "Meow Meow" << std::endl;
}

void Cat::setType(std::string type) {
	_type = type;
}