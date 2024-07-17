#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {}

WrongAnimal::WrongAnimal(const WrongAnimal &src) {
	if (this != &src)
		*this = src;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &src) {
	if (this != &src)
		type = src.type;
	return(*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << type << " destroyed (Parent class)" << std::endl;
}

void	WrongAnimal::makeSound() const {
	std::cout <<  "random WrongAnimal sound" << std::endl;
}

std::string	WrongAnimal::getType() const {
	return (this->type);
}

void	WrongAnimal::setType(std::string str) {
	this->type = str;
}

std::ostream	&operator<<(std::ostream &stream, const WrongAnimal &a) {
	std::cout << "<< operator overload\n";
	return stream;
}