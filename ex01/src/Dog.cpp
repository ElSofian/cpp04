#include "Animals.hpp"
#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& src) : Animal(src) {
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& src) {
	if (this != &src)
		setType(src.getType());
	std::cout << "Dog assignment operator called" << std::endl;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woof Woof" << std::endl;
}

std::string Dog::getIdea(int i)
{
    if (i >= 0 && i < 100)
        return brain->returnIdea(i);
    else
        return "";
}