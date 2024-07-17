#ifndef WRONG_CAT_H
# define WRONG_CAT_H

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	private:
		
	public:
		WrongCat();
		WrongCat(const WrongCat &c);
		~WrongCat();
		WrongCat &operator=(const WrongCat &c);

		void makeSound() const;
};

#endif