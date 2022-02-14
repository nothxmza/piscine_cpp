#include "Cat.hpp"


Cat::Cat(void) : Animal(){

    std::cout << "default constructor called : CAT" << std::endl;
    type = "cat";
    return;
}

Cat::Cat(Cat const & src) {

    std::cout << "Copy constructor called : CAT" << std::endl;
    *this = src;

    return;
}

Cat & Cat::operator=(Cat const & rhs){

    std::cout << "Assignment operator called : CAT" << std::endl;
    this->type = rhs.getType();

    return *this;
}


Cat::~Cat(void){

    std::cout << "default destrcutor called : CAT" << std::endl;
    return;
}

void Cat::makeSound(void) const{

    std::cout << "Meow" << std::endl;
    return;
}