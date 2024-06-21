#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& src) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& src) {
	if (this != &src) {
		for (int i = 0; i < 100; i++)
			ideas[i] = src.getIdea(i);
	}
	std::cout << "Brain assignment operator called" << std::endl;
	return *this;
}

std::string Brain::getIdea(int index) const {
	return ideas[index];
}

void Brain::setIdea(int index, std::string idea) {
	ideas[index] = idea;
}