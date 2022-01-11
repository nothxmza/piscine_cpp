#include "AAnimal.hpp"

AAnimal::AAnimal(void){

    std::cout << "default constructor called" << std::endl;
    
    return;
}

AAnimal::AAnimal(AAnimal const & src) {

    std::cout << "Copy constructor called" << std::endl;
    *this = src;

    return;
}

AAnimal::~AAnimal(void){

    std::cout << "default destructor called" << std::endl;
    
    return;
}

std::string AAnimal::getType(void) const{

    return this->type;
}

AAnimal & AAnimal::operator=(AAnimal const & rhs){

    std::cout << "Assignment operator called" << std::endl;
    this->type = rhs.getType();

    return *this;
}
void AAnimal::makeSound(void) const{

    std::cout <<"rrrrrr" << std::endl;
    
    return;
}