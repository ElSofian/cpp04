#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: virtual public Animal
{
    private:
        Brain *brain;

    public:
        Cat();
        Cat(const Cat& c);
        virtual ~Cat();
        Cat& operator=(const Cat& c);
        
        virtual void makeSound() const;
        std::string getIdea(int i);
};

#endif