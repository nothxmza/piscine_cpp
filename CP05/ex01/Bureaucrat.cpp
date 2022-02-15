#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(void){

    std::cout <<"Bureaucrat default constructor called" << std::endl;
    this->grade = 10;
}

Bureaucrat::Bureaucrat(std::string const name,int note) : name(name){

	std::cout <<"Bureaucrat constructor called" << std::endl;
    if(note < 1){
        throw Bureaucrat::GradeTooHighException();
    }
    else if(note > 150){
        throw Bureaucrat::GradeTooLowException();
    }
    this->grade = note;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) {
    
    *this = src;
    return;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs){

    this->grade = rhs.getGrade();
    return *this;
}
Bureaucrat::~Bureaucrat(void){

    std::cout <<"Bureaucrat destructor called" << std::endl;
}

void Bureaucrat::incrementer(int nbr){

    int j = this->grade - nbr;
    if (j< 1){
        throw Bureaucrat::GradeTooHighException();
    }
    this->grade -= nbr;
}

void Bureaucrat::decrementer(int nbr){

    int j = this->grade + nbr;
    if( j > 150){
        throw Bureaucrat::GradeTooLowException();
    }
    this->grade += nbr;
}

int Bureaucrat::getGrade(void) const{

    return this->grade;
}

std::string Bureaucrat::getName(void) const{

    return this->name;
}

void Bureaucrat::signForm(Form  & name){

    if(name.getSigne() == 1){
		std::cout << this->getName() << " signs " << name.getName() << std::endl;
	}
	else if(name.getSigne() == 0){
		std::cout << this->getName() << "  couldn’t sign " << name.getName() << " because grade is to low" << std::endl;
	}
}


std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs){

    o << rhs.getName();
    std::cout <<" bureaucrat grade ";
    o << rhs.getGrade();
    return(o);
}