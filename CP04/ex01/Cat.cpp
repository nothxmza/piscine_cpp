#include "Cat.hpp"


Cat::Cat(void) : Animal(){

    std::cout << "Cat default constructor called" << std::endl;
    type = "cat";
    this->brain = new Brain();
    return;
}

Cat::Cat(Cat const & src) {

    std::cout << "Copy constructor called" << std::endl;
    *this = src;

    return;
}

Cat & Cat::operator=(Cat const & rhs){

    this->brain = new Brain(*(rhs.brain));
	this->setType(rhs.getType());
	return (*this);

}

void		Cat::setType(std::string type) {
	this->type = type;
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