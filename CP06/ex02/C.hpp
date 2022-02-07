#ifndef C_HPP
#define C_HPP

#include "Base.hpp"

class C : public Base
{
	public:
		C(void){};
		C(C const & rhs){
            *this = rhs;
        }
		virtual ~C(void){};

		C&	operator=(C const & rhs){
            (void)rhs;
            return(*this);
        }
};

#endif