#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongCat.hpp"

int main ()
{
    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();

        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound(); //will output the cat sound!
        j->makeSound();
        meta->makeSound();
        delete j;
        delete i;
        delete meta;
        std::cout << "------------------" << std::endl;
    }
    {
        {
            Animal instantiateTest = Animal();
            std::cout << instantiateTest.getType() << std::endl;
            instantiateTest.makeSound();

            Cat smolCat = Cat();
            std::cout << smolCat.getType() << std::endl;
            smolCat.makeSound();

            Dog smolDog = Dog();
            std::cout << smolDog.getType() << std::endl;
            smolDog.makeSound();
        }
        {
            const Animal constTest = Dog();
            constTest.makeSound();
            const Animal constTest2 = Cat();
            constTest2.makeSound();
        }
        {
            const WrongCat test = WrongCat();
            test.makeSound();
        }
    }

    return 0;
}