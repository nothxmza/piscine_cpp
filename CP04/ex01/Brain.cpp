#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "default constructor called : BRAIN" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "destructor called : BRAIN" << std::endl;
	
}
Brain &		Brain::operator=(Brain const & rhs)
{
	std::cout << "operator called : BRAIN" << std::endl;
	for (int i = 0 ; i < 100 ; i++)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}
Brain::Brain(Brain const & src)
{
	std::cout << "copy constructor called : BRAIN" << std::endl;
	*this = src;
	return;
}
