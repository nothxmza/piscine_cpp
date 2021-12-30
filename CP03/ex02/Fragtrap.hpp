#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public :
        FragTrap(void);
	    FragTrap(FragTrap const & src);
	    FragTrap & operator=(FragTrap const & rhs);
        ~FragTrap(void);

    private :

};

#endif