#include "../inc/Animal.hpp"

Animal::Animal(): type("Default Animal") {}

Animal::Animal(const Animal &src) {
	if (this != &src)
		*this = src;
}

Animal	&Animal::operator=(const Animal &src) {
	if (this != &src)
		type = src.type;
	return(*this);
}

Animal::~Animal() {
	std::cout << type << " destroyed (Parent class)" << std::endl;
}

void	Animal::makeSound() const {
	std::cout <<  "random animal sound" << std::endl;
}

std::string	Animal::getType() const {
	return (this->type);
}

void	Animal::setType(std::string str) {
	this->type = str;
}

std::ostream	&operator<<(std::ostream &stream, const Animal &a)
{
	std::cout << "<< operator overload\n";
	return stream;
}