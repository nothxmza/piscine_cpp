#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void){
    ;
}
RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("a31",72,45){

    this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm(void){};

std::string RobotomyRequestForm::getTarget(void)const{
	return this->target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src){
    
    *this = src;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs){

	this->target = rhs.target;
    this->setSign(rhs.getSigne());
    return *this;
}
bool    RobotomyRequestForm::executeform() const
{
	int		random = rand() % 100 + 1;

	std::cout << "* BRRRRRRR *" << std::endl;
	if (random >= 50)
		std::cout << this->target << " has been robotomized successfully" << std::endl;
	else
		std::cout << "Robotomy failed" << std::endl;
	return true;
}