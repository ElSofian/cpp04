#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"

class Cat: virtual public Animal
{
	private:
		
	public:
		Cat();
		Cat(const Cat &c);
		virtual ~Cat();
		Cat	&operator=(const Cat& c);
		
		virtual void makeSound() const;
};

#endif