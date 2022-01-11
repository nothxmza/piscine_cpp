#include "WrongCat.hpp"


WrongCat::WrongCat(void) : WrongAnimal(){

    std::cout << "default WrongCat constructor called" << std::endl;
    type = "WrongCat";
    return;
}

WrongCat::~WrongCat(void){

    std::cout << "default WrongCat destrcutor called" << std::endl;
    return;
}

void WrongCat::makeSound(void) const{

    std::cout << "Meow" << std::endl;
    return;
}