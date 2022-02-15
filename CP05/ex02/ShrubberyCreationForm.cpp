#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void){
	;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("kl",145,137){
	
	this->target = target;
}

std::string ShrubberyCreationForm::getTarget(void)const{
	return this->target;
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src){
    
    *this = src;
    return;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs){

	this->target = rhs.getSigne();
    return *this;
}

void ShrubberyCreationForm::executeform(void)const{

	std::ofstream file;
	std::string s1 = this->getTarget();
	s1 += "_shrubbery";
	file.open(s1);

file << "     	   _-_     " << std::endl
   	<< "	    /~~   ~~\\  "<< std::endl
	<< "	 /~~         ~~\\     "<<std::endl
	<< "	 {               }     "<<std::endl
    << "    \\  _-     -_  /		"<<std::endl
   	<< "       ~  \\ //  ~		"<<std::endl
  	<< "    _- -   | | _- _		"<<std::endl
	<< "      _ -  | |   -_		"<<std::endl
    << "          // \\			"<<std::endl
	<< "     	   _-_     " << std::endl
   	<< "	    /~~   ~~\\  "<< std::endl
	<< "	 /~~         ~~\\     "<<std::endl
	<< "	 {               }     "<<std::endl
    << "    \\  _-     -_  /		"<<std::endl
   	<< "       ~  \\ //  ~		"<<std::endl
  	<< "    _- -   | | _- _		"<<std::endl
	<< "      _ -  | |   -_		"<<std::endl
    << "          // \\			"<<std::endl
	<< "     	   _-_     " << std::endl
   	<< "	    /~~   ~~\\  "<< std::endl
	<< "	 /~~         ~~\\     "<<std::endl
	<< "	 {               }     "<<std::endl
    << "    \\  _-     -_  /		"<<std::endl
   	<< "       ~  \\ //  ~		"<<std::endl
  	<< "    _- -   | | _- _		"<<std::endl
	<< "      _ -  | |   -_		"<<std::endl
    << "          // \\			"<<std::endl;

file.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){
	;
}

