#ifndef A_HPP
#define A_HPP

#include "Base.hpp"

class A : public Base
{
	public:
		A(void){};
		A(A const & rhs){
            *this = rhs;
        }
		virtual ~A(void){};

		A&	operator=(A const & rhs){
            (void)rhs;
            return(*this);
        }
};

#endif