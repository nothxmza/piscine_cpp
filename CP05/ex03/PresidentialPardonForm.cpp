#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm",25, 5){

    this->target = target;
}

std::string PresidentialPardonForm::getTarget(void)const{
    return this->target;
}

bool PresidentialPardonForm::executeform(void)const{

    std::cout << this->getTarget() << " a ete pardonee par Zafod Beeblebrox." << std::endl;
    return true;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src): Form(src.getName(), src.getGradeS(), src.getGradeE()){
    
    *this = src;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs){

	this->target = rhs.target;
	this->setSign(rhs.getSigne());
	return (*this);
}