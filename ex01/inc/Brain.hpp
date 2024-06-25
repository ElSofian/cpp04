#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "Animals.hpp"

class Brain {
	private:
		std::string ideas[100];
	
	public:
		Brain();
		Brain(const Brain& src);
		virtual ~Brain();
		Brain& operator=(const Brain& src);

		std::string returnIdea(int i);
};

#endif