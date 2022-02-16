#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(void): name("defaultBureaucrat"){

   // std::cout <<"Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name,int note) : name(name){

	//std::cout <<"Bureaucrat constructor called" << std::endl;
    if(note < 1){
        throw Bureaucrat::GradeTooHighException();
    }
    else if(note > 150){
        throw Bureaucrat::GradeTooLowException();
    }
    this->grade = note;
}

Bureaucrat::~Bureaucrat(void){

   // std::cout <<"Bureaucrat destructor called" << std::endl;
   ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) {
    
    *this = src;
    return;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs){

    this->grade = rhs.getGrade();
    return *this;
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

void		Bureaucrat::signForm(Form & rhs)
{
	if (rhs.getSigne())
	{
		std::cout << this->getName() << " cannot sign " << rhs.getName()
				<< " because the form is already signed." << std::endl;
	}
	else if (rhs.getGradeS() < this->getGrade())
	{
		std::cout << this->getName() << " cannot sign " << rhs.getName()
				<< " because it's grade is too low." << std::endl;
	}
	else
	{
		std::cout << this->getName() << " signs " << rhs.getName() << std::endl;
	}
	rhs.beSigned(*this);
}

void Bureaucrat::executeForm(Form const & form){

    if (!form.getSigne())
	{
		std::cout << this->getName() << " cannot execute " << form.getName()
				<< " because the form is unsigned." << std::endl;
	}
	else if (form.getGradeE() < this->getGrade())
	{
		std::cout << this->getName() << " cannot execute " << form.getName()
				<< " because it's grade is too low." << std::endl;
	}
	else
	{
		std::cout << this->getName() << " executes " << form.getName() << std::endl;
	}
    form.MethodeExec(*this);
}


std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs){

    std::cout << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
    return(o);
}