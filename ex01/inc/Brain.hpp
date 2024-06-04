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

		std::string getIdea(int index) const;
		void setIdea(int index, std::string idea);
};

#endif