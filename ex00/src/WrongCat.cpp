#include "../inc/WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal() {
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &c): WrongAnimal() {
    if (this != &c)
        *this = c;
}

WrongCat& WrongCat::operator=(const WrongCat &c) {
    if (this != &c)
        type = c.type;
    return (*this);
}

WrongCat::~WrongCat() {
    std::cout << type << " was destroyed" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "wrongmeow" << std::endl;
}