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
		virtual	~Animal();
		Animal	&operator=(const Animal &a);
		
		virtual void makeSound() const;
		std::string getType() const;
		void setType(std::string str);
};

std::ostream& operator<<(std::ostream& o, const Animal& a);

#endif