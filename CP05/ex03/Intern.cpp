#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void) {}

Intern::Intern(const Intern & rhs)
{
	*this = rhs;
}

Intern::~Intern(void) {}

Intern&	Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return (*this);
}

Form*	Intern::makeForm(std::string name, std::string target)
{
	std::string forms[3];

	forms[0] = "shrubbery creation";
	forms[1] = "robotomy request";
	forms[2] = "presidential pardon";

	for (int i = 0 ; i < 3 ; i++)
	{
		if (forms[i] == name)
		{
			switch (i)
			{
				case 0:
					return (new ShrubberyCreationForm(target));
				case 1:
					return (new RobotomyRequestForm(target));
				case 2:
					return (new PresidentialPardonForm(target));
				default:
					throw BadNameException();
			}
		}
	}

	return (NULL);
}