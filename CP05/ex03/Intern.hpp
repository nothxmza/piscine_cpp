#pragma once
#ifndef INTERN_H

#include <iostream>
#include <string>
#include "Form.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(const Intern & rhs);
		~Intern(void);

		Form*	makeForm(std::string name, std::string target);

		Intern&	operator=( Intern const & rhs );

		class BadNameException : public std::exception
		{
			virtual const char*	what( void ) const throw()
			{
				return ("Intern: Bad name");
			}
		};
};

#endif