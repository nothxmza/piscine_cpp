#include "Cat.hpp"

Cat::Cat(void) : AAnimal(){

    std::cout << "Default constructor called : CAT" << std::endl;
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

    std::cout << "Operator called : CAT" << std::endl;
    this->brain = new Brain(*(rhs.brain));
	this->type =rhs.getType();
	return (*this);

}

std::string	Cat::getType() const {
	return (this->type);
}

Cat::~Cat(void){

    std::cout << "Destrcutor called : CAT" << std::endl;
    delete this->brain; 

    return;
}

void Cat::makeSound(void) const{

    std::cout << "Meow" << std::endl;
    return;
}