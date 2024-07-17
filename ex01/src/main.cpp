#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

int main()
{
	Animal* array[6];
	for(int i = 0; i < 6; i++)
	{
		if (i <= 2)
			array[i] = new Dog();
		else
			array[i] = new Cat();
		std::cout << std::endl;
		delete array[i];
	}

	std::cout << "------------------" << std::endl;

	Dog basic;
	{
		Dog tmp = basic;
	}
	std::cout << "end\n";
	// return (0);

	std::cout << "------------------" << std::endl;

	// DEEP COPY TEST
	Cat test  = Cat();
	std::string idea = test.getIdea(99);
	std::cout << idea << std::endl;

	Cat test2  = Cat();
	std::string idea2 = test2.getIdea(99);
	std::cout << idea2 << std::endl;

	test = test2;
	std::cout << test.getIdea(99) << std::endl;
	
	return (0);
}