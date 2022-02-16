#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat supervisor("Supervisor", 100);
	std::cout << supervisor << std::endl;
	Form *pres = new ShrubberyCreationForm("Francis");
	supervisor.signForm(*pres);
	pres->MethodeExec(supervisor);

	try
	{
		ShrubberyCreationForm *robot = new ShrubberyCreationForm("Bender");
		robot->MethodeExec(supervisor);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	delete pres;

	return (0);
}
