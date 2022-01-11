#include "Cat.hpp"


Cat::Cat(void) : Animal(){

    std::cout << "default Cat constructor called" << std::endl;
    type = "cat";
    return;
}

Cat::~Cat(void){

    std::cout << "default Cat destrcutor called" << std::endl;
    return;
}

void Cat::makeSound(void) const{

    std::cout << "Meow" << std::endl;
    return;
}