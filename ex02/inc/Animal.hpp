#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class Animal
{
    protected:
        std::string type;
        
    public:
        Animal();
        Animal(const Animal &a);
        virtual ~Animal();
        Animal& operator=(const Animal &a);

        virtual std::string getType() const = 0;
        virtual void setType(std::string str);
        virtual void makeSound() const = 0;
};

std::string getIdea();

#endif