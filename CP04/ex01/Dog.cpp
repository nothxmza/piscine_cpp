#include "Dog.hpp"

Dog::Dog(void) : Animal(){

    std::cout << "Dog default constructor called" << std::endl;
    type = "Dog";
    this->brain = new Brain();
    return;
}

Dog::Dog(Dog const & src) {

    std::cout << "Copy constructor called" << std::endl;
    *this = src;

    return;
}

Dog & Dog::operator=(Dog const & rhs){

    std::cout << "Assignment operator called" << std::endl;
    this->type = rhs.getType();

    return *this;
}

Dog::~Dog(void){

    std::cout << "Dog destrcutor called" << std::endl;
    delete this->brain;
    return;
}

void Dog::makeSound(void) const{

    std::cout << "Waaaaafff" << std::endl;
    return;
}