#include "Dog.hpp"

Dog::Dog(void) : Animal(){

    std::cout << "default Dog constructor called" << std::endl;
    type = "Dog";
    return;
}

Dog::~Dog(void){

    std::cout << "default Dog destrcutor called" << std::endl;
    return;
}

void Dog::makeSound(void) const{

    std::cout << "Waaaaafff" << std::endl;
    return;
}