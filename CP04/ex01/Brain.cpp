#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constrcutore called" << std::endl;
}

Brain::Brain(std::string idea)
{
	this->ideas[0] = idea;
}
Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
	
}
Brain &		Brain::operator=(Brain const & rhs)
{
	for (int i = 0 ; i < 100 ; i++)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}
Brain::Brain(Brain const & src)
{
	std::cout << "copy constructor called" << std::endl;
	*this = src;
	return;
}
