#include "Dog.hpp"

Dog::Dog(void) : Animal(){

    std::cout << "Default constructor called : DOG" << std::endl;
    type = "Dog";
    this->brain = new Brain();
    return;
}

Dog::Dog(Dog const & src) {

    std::cout << "Copy constructor called : DOG" << std::endl;
    *this = src;

    return;
}

Dog & Dog::operator=(Dog const & rhs){

    std::cout << "Assignment operator called : DOG" << std::endl;
    this->brain = new Brain(*(rhs.brain));
    this->type = rhs.getType();

    return *this;
}

Dog::~Dog(void){

    std::cout << "Destrcutor called : DOG" << std::endl;
    delete this->brain;
    return;
}

void Dog::makeSound(void) const{

    std::cout << "Waaaaafff" << std::endl;
    return;
}