#ifndef B_HPP
#define B_HPP

#include "Base.hpp"

class B : public Base
{
	public:
		B(void){};
		B(B const & rhs){
            *this = rhs;
        }
		virtual ~B(void){};

		B&	operator=(B const & rhs){
            (void)rhs;
            return(*this);
        }
};

#endif