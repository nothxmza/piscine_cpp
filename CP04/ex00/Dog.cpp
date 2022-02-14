#include "Dog.hpp"

Dog::Dog(void) : Animal(){

    std::cout << "default constructor called : DOG" << std::endl;
    type = "Dog";
    return;
}

Dog::Dog(Dog const & src) {

    std::cout << "Copy constructor called : DOG" << std::endl;
    *this = src;

    return;
}

Dog & Dog::operator=(Dog const & rhs){

    std::cout << "Assignment operator called : DOG" << std::endl;
    this->type = rhs.getType();

    return *this;
}

Dog::~Dog(void){

    std::cout << "default Dog destrcutor called : DOG" << std::endl;
    return;
}

void Dog::makeSound(void) const{

    std::cout << "Waaaaafff" << std::endl;
    return;
}
