#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void){

    std::cout << "default WrongAnimal constructor called" << std::endl;
    this->type = "WrongAnimal";
    return;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src) {

    std::cout << "Copy constructor called" << std::endl;
    *this = src;

    return;
}

WrongAnimal::~WrongAnimal(void){

    std::cout << "default WrongAnimal destructor called" << std::endl;
    
    return;
}

std::string WrongAnimal::getType(void) const{

    return this->type;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs){

    std::cout << "Assignment WrongAnimal operator called" << std::endl;
    this->type = rhs.getType();

    return *this;
}
void WrongAnimal::makeSound(void) const{

    std::cout <<"sheeeeeeeeesh" << std::endl;
    
    return;
}