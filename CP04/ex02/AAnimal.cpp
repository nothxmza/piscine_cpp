#include "AAnimal.hpp"

AAnimal::AAnimal(void){

    std::cout << "Default constructor called : ANIMAL" << std::endl;
    
    return;
}

AAnimal::AAnimal(AAnimal const & src) {

    std::cout << "Copy constructor called : AAnimal" << std::endl;
    *this = src;

    return;
}

AAnimal::~AAnimal(void){

    std::cout << "Destructor called : AAnimal" << std::endl;
    
    return;
}

std::string AAnimal::getType(void) const{

    return this->type;
}

AAnimal & AAnimal::operator=(AAnimal const & rhs){

    std::cout << "Assignment operator called : AAnimal" << std::endl;
    this->type = rhs.getType();

    return *this;
}
void AAnimal::makeSound(void) const{

    std::cout <<"Animal" << std::endl;
    
    return;
}