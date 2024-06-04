#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <iomanip>
# include <sstream>

class Animal {
	protected:
		std::string _type;

	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal& src);
		virtual ~Animal();
		Animal& operator=(const Animal& src);

		virtual std::string getType() const;
		virtual void makeSound() const;
		virtual void setType(std::string type);
};

#endif