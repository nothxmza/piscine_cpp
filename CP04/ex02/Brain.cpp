#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default constructor called : BRAIN" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Destructor called : BRAIN" << std::endl;
	
}
Brain &		Brain::operator=(Brain const & rhs)
{
	std::cout << "Operator called : BRAIN" << std::endl;
	for (int i = 0 ; i < 100 ; i++)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}
Brain::Brain(Brain const & src)
{
	std::cout << "Copy constructor called : BRAIN" << std::endl;
	*this = src;
	return;
}
