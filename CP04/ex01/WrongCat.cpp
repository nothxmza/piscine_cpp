#include "WrongCat.hpp"


WrongCat::WrongCat(void) : WrongAnimal(){

    std::cout << "default WrongCat constructor called" << std::endl;
    type = "WrongCat";
    return;
}

WrongCat::WrongCat(WrongCat const & src) {

    std::cout << "Copy constructor called" << std::endl;
    *this = src;

    return;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs){

    std::cout << "Assignment operator called" << std::endl;
    this->type = rhs.getType();

    return *this;
}

WrongCat::~WrongCat(void){

    std::cout << "default WrongCat destrcutor called" << std::endl;
    return;
}

void WrongCat::makeSound(void) const{

    std::cout << "Meow" << std::endl;
    return;
}