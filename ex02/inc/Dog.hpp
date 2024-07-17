#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: virtual public Animal
{
    private:
        Brain *brain;

    public:
        Dog();
        Dog(const Dog& d);
        virtual ~Dog();
        Dog& operator=(const Dog& d);
        
        virtual void makeSound() const;
        std::string getIdea(int i);
        std::string getType() const;
};


#endif