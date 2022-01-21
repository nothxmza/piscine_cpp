#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("ewq",25, 5){

    this->target = target;
}

std::string PresidentialPardonForm::getTarget(void)const{
    return this->target;
}

void PresidentialPardonForm::executeform(void)const{

    std::cout << this->getTarget() << " a ete pardonee par Zafod Beeblebrox." << std::endl;
}
