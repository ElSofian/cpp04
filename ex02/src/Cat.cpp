#include "../inc/Cat.hpp"

static int nbCat = 0;

Cat::Cat(): Animal() {
    type = "Cat";
    brain = new Brain();
    nbCat +=1;
    std::cout << "(Default Cat Constructor) Cat #" << nbCat << std::endl;
}


Cat::Cat(const Cat& a) :Animal() {
   type = a.type;
   brain = new Brain(*(a.brain));
   nbCat += 1;
   std::cout << "(Default Cat Constructor 2) Cat #" << nbCat << std::endl;
}

Cat& Cat::operator=(const Cat& a) {
    if (this != &a)
    {
        type = a.type;
        Brain *tmp = new Brain();
        tmp = a.brain;
        *brain = *tmp;        
        nbCat += 1;
        std::cout << "(Copy Cat Constructor) Cat #" << nbCat << std::endl;
    }
    return (*this);
}

Cat::~Cat() {
    delete brain;
    std::cout << type << " was destroyed" << std::endl;
}


void Cat::makeSound() const {
    std::cout << "meow" << std::endl;
}

std::string Cat::getType() const {
    return type;
}


std::string Cat::getIdea(int i) {
    if (i >= 0 && i < 100)
        return brain->returnIdea(i);
    else
        return "";
}