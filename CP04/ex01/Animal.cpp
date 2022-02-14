#include "Animal.hpp"

Animal::Animal(void){

    std::cout << " default constructor called : ANIMAL" << std::endl;
    
    return;
}

Animal::Animal(Animal const & src) {

    std::cout << "Copy constructor called : ANIMAL" << std::endl;
    *this = src;

    return;
}

Animal::~Animal(void){

    std::cout << "Animal destructor called : ANIMAL" << std::endl;
    
    return;
}

std::string Animal::getType(void) const{

    return this->type;
}

Animal & Animal::operator=(Animal const & rhs){

    std::cout << "Assignment operator called : ANIMAL" << std::endl;
    this->type = rhs.getType();

    return *this;
}
void Animal::makeSound(void) const{

    std::cout <<"rrrrrr" << std::endl;
    
    return;
}