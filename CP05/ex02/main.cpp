#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    
	Bureaucrat supervisor("Supervisor", 10);
	

	Form *robot = new RobotomyRequestForm("Bender");
	robot->beSigned(supervisor);
	robot->MethodeExec(supervisor);
	//francis.executeForm(*robot);
	//francis.executeForm(*robot);

    try
	{

		RobotomyRequestForm robot = RobotomyRequestForm("Bender");
		std::cout << robot << std::endl;
		robot.MethodeExec(supervisor);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

    delete robot;
}