#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain{


	public:
		Brain(void);
		Brain(std::string idea);
		Brain(Brain const & src);
		Brain & operator=(Brain const & rhs);
		~Brain(void);


	private:
	std::string ideas[100];


};



#endif