#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain{


	public:
		Brain(void);
		Brain(Brain const & src);
		Brain & operator=(Brain const & rhs);
		virtual ~Brain(void);


	private:
	std::string ideas[100];


};



#endif