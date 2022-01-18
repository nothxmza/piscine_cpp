#include "Cat.hpp"


Cat::Cat(void) : Animal(){

    std::cout << "default Cat constructor called" << std::endl;
    type = "cat";
    return;
}

Cat::Cat(Cat const & src) {

    std::cout << "Copy constructor called" << std::endl;
    *this = src;

    return;
}

Cat & Cat::operator=(Cat const & rhs){

    std::cout << "Assignment operator called" << std::endl;
    this->type = rhs.getType();

    return *this;
}


Cat::~Cat(void){

    std::cout << "default Cat destrcutor called" << std::endl;
    return;
}

void Cat::makeSound(void) const{

    std::cout << "Meow" << std::endl;
    return;
}