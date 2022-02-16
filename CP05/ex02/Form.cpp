#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void): gradeS(50),gradeE(50),name("defaultForm"){
	this->signe = false;;
}

Form::~Form(void){};

Form::Form(std::string const name,int const gradeS,int const gradeE) : gradeS(gradeS),gradeE(gradeE),name(name){

	//std::cout <<"constrcutor called" << std::endl;
	if (gradeS < 1 || gradeE < 1)
        throw GradeTooLowException();
    else if (gradeS > 150 || gradeE > 150)
        throw GradeTooHighException();
    else
    {
        this->signe = false;
    }
}

Form::Form(Form const & src) : gradeS(getGradeS()), gradeE(getGradeE()),name(getName()){
    
    *this = src;
    return;
}

Form & Form::operator=(Form const & rhs){

	this->signe = rhs.getSigne();
    return *this;
}
void		Form::setSign(bool sign)
{
	this->signe = sign;
}
void       Form::beSigned(Bureaucrat & rhs)
{
    if (rhs.getGrade() > this->getGradeS())
        throw GradeTooLowException();
	this->signe = true;
}

void Form::MethodeExec(Bureaucrat const & executor)const{

	if (!(this->getSigne()))
        throw Form::Nosigned();
    else
    {
        if (executor.getGrade() > this->getGradeE())
            throw GradeTooLowException();
		else
			this->executeform();
    }
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