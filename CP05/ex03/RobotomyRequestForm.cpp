#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void){
    ;
}
RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("a31",72,45){

    this->target = target;
}

void RobotomyRequestForm::executeform(void) const{

    std::cout <<"bruit de perceuses " << this->getTarget() << " a bien ete robotomizee dans 50% des cas, ou son echec le reste du temps." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void){};

std::string RobotomyRequestForm::getTarget(void)const{
	return this->target;
}