#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void): gradeS(1),gradeE(5){
	;
}

Form::~Form(void){
	std::cout <<"destructor called" << std::endl;
}

Form::Form(std::string const name,int const gradeS,int const gradeE) :gradeS(gradeS),gradeE(gradeE), name(name){

	std::cout <<"constrcutor called" << std::endl;
	if(gradeS < 1 || gradeE < 1){
		throw Form::GradeTooHighException();
	}
	if(gradeS > 150 || gradeE > 150){
		throw Form::GradeTooLowException();
	}
	this->signe = 0;
}

Form::Form(Form const & src) :gradeS(1),gradeE(5){
    
    *this = src;
    return;
}

Form & Form::operator=(Form const & rhs){

	this->signe = rhs.getSigne();
    return *this;
}

Form& Form::beSigned(Bureaucrat  & name){

	if(gradeS > name.getGrade()){

		this->signe = 1;
		name.signForm(*this);
	}
	else if(gradeS < name.getGrade()){

		name.signForm(*this);
		throw Form::GradeTooLowException();
	}
	return (*this);

}

std::string Form::getName(void) const{
	return this->name;
}

int Form::getGradeS(void) const{
	return this->gradeS;
}

int Form::getGradeE(void) const{
	return this->gradeE;
}

bool Form::getSigne(void) const{
	return this->signe;
}

std::ostream & operator<<(std::ostream & o, Form const & rhs){

		std::cout <<"name ";
		o << rhs.getName();
		if(rhs.getSigne() == 1){
			std::cout <<" signed ";
		}
		else if(rhs.getSigne() == 0){
			std::cout <<" non signee ";
		}
		std::cout <<"grade requis pour le signer ";
		o << rhs.getGradeS();
		std::cout <<" grade requis pour l'executer  ";
		o << rhs.getGradeE() << "."<< std::endl;
		return(o);
}