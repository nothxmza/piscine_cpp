#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void){
	;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm",145,137){
	
	this->target = target;
}

std::string ShrubberyCreationForm::getTarget(void)const{
	return this->target;
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src){
    
    *this = src;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs){

	this->target = rhs.target;
	this->setSign(rhs.getSigne());
	return (*this);
}

bool ShrubberyCreationForm::executeform(void)const{

	std::ofstream file;
	std::string s1 = this->getTarget();
	s1 += "_shrubbery";
	file.open(s1);
if (!(file.is_open()))
	{
		std::cout << "Can't create file." << std::endl;
		return (false);
	}
	else
	{
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
	return true;
	}
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){
	;
}

