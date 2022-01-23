#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Form* Intern::makeForm(std::string name,std::string target){

    std::string intern[3];
    intern[0] = "shrubbery creation";
    intern[1] = "robotomy request";
    intern[2] = "presidential pardon";

    for(int i = 0; i < 3;i++)
    {
        if(intern[i] == name)
        {
            switch(i)
            {
                case 0:
                    std::cout << "Intern creates shrubbery form." <<std::endl;
                    return(new ShrubberyCreationForm(target));
                case 1:
                    std::cout << "Intern creates robotomy form." <<std::endl;
					return (new RobotomyRequestForm(target));
				case 2:
                    std::cout << "Intern creates presidential form." <<std::endl;
					return (new PresidentialPardonForm(target));
                default:
                    throw NotGoodName();
            }
        }
    }
    return NULL;
}