#ifndef WRONG_ANIMAL_H
# define WRONG_ANIMAL_H

# include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
		
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &a);
		virtual ~WrongAnimal();
		WrongAnimal	&operator=(const WrongAnimal &a);

		std::string	getType() const;
		void		setType(std::string str);
		void		makeSound() const;
};

std::ostream& operator<<(std::ostream &o, const WrongAnimal &a);

#endif