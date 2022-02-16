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

Form::Form(Form const & src) :gradeS(getGradeS()),gradeE(getGradeE()){
    
    *this = src;
    return;
}

Form & Form::operator=(Form const & rhs){

	this->signe = rhs.getSigne();
    return *this;
}

Form& Form::beSigned(Bureaucrat  & name){

	if(gradeS > name.getGrade()){

		this->signe = true;
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
	
	std::cout << "Form " << rhs.getName() << ", signed : " << rhs.getSigne() << ", grade required for sign " << rhs.getGradeS() << ", grade required for execute " << rhs.getGradeE() << ".";
	return(o);
}