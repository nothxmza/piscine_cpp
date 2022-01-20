#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "Form.hpp"

class  ShrubberyCreationForm : public Form{

		public:
			ShrubberyCreationForm(void);
			ShrubberyCreationForm(std::string target);
			//~ShrubberyCreationForm(void);
			void executeform(void);
			std::string getTarget(void);

		private:
			std::string target;



};

#endif