#ifndef CAT_HPP
# define CAT_HPP

# include "Animals.hpp"
# include "Brain.hpp"

class Cat : virtual public Animal {
	public:
		Cat();
		Cat(const Cat& src);
		virtual ~Cat();
		Cat& operator=(const Cat& src);

		virtual void makeSound() const;
		std::string getIdea(int i);
	
	private:
		Brain* brain;
};

#endif