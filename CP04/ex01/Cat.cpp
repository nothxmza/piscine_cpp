#include "Cat.hpp"


Cat::Cat(void) : Animal(){

    std::cout << "Cat default constructor called" << std::endl;
    type = "cat";
    this->brain = new Brain();
    return;
}

Cat::Cat(Cat const & src) {

    std::cout << "Copy constructor called : CAT" << std::endl;
    *this = src;

    return;
}

Cat & Cat::operator=(Cat const & rhs){

    std::cout << "operator CAT called" << std::endl;
    this->brain = new Brain(*(rhs.brain));
	this->type =rhs.getType();
	return (*this);

}

std::string	Cat::getType() const {
	return (this->type);
}

Cat::~Cat(void){

    std::cout << "Cat destrcutor called" << std::endl;
    delete this->brain; 

    return;
}

void Cat::makeSound(void) const{

    std::cout << "Meow" << std::endl;
    return;
}