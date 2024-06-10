#ifndef CAT_HPP
# define CAT_HPP

# include "Animals.hpp"

class Cat : public Animal {
	public:
		Cat();
		Cat(const Cat& src);
		virtual ~Cat();
		Cat& operator=(const Cat& src);

		virtual std::string getType() const;
		virtual void makeSound() const;
		virtual void setType(std::string type);
};

#endif