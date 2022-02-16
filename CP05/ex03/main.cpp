#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	std::cout << "=== Intern Tests ===" << std::endl;
	Bureaucrat hz("hz", 1);

	Intern	vo;
	Form*	rrf;

	rrf = vo.makeForm("shrubbery creation", "maison");
	std::cout << *rrf << std::endl;
	rrf->beSigned(hz);
	std::cout << *rrf << std::endl;
	hz.executeForm(*rrf);

	delete rrf;
	return (0);
}
