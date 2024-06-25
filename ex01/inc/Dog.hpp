#ifndef DOG_HPP
# define DOG_HPP

# include "Animals.hpp"
# include "Brain.hpp"

class Dog : public Animal {
	public:
		Dog();
		Dog(const Dog& src);
		virtual ~Dog();
		Dog& operator=(const Dog& src);

		virtual void makeSound() const;
		std::string getIdea(int i);

	private:
		Brain* brain;
};

#endif