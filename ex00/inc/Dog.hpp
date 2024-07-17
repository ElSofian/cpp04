#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

class Dog: virtual public Animal
{
    private:
        
    public:
        Dog();
        Dog(const Dog &d);
        virtual ~Dog();
        Dog &operator=(const Dog& d);

        virtual void makeSound() const;
};

#endif