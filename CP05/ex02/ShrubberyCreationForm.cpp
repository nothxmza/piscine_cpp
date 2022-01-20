#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void){
	;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("kl",145,137){
	
	this->target = target;
}

std::string ShrubberyCreationForm::getTarget(void){
	return this->target;
}

void ShrubberyCreationForm::executeform(void){

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
    << "          // \\			"<<std::endl;

file.close();
}
