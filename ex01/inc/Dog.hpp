#ifndef DOG_HPP
# define DOG_HPP

# include "Animals.hpp"

class Dog : public Animal {
	public:
		Dog();
		Dog(const Dog& src);
		virtual ~Dog();
		Dog& operator=(const Dog& src);

		virtual std::string getType() const;
		virtual void makeSound() const;
		virtual void setType(std::string type);
};

#endif