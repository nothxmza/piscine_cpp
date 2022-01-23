#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
		
	Intern  someRandomIntern;
	Form*   rrf;
	rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
	rrf = someRandomIntern.makeForm("pr", "Bender");


	delete rrf;
}