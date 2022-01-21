#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "Form.hpp"

class  ShrubberyCreationForm : public Form{

		public:
			ShrubberyCreationForm(void);
			ShrubberyCreationForm(std::string target);
			virtual ~ShrubberyCreationForm(void);
			virtual void executeform(void) const;
			std::string getTarget(void)const;

		private:
			std::string target;



};

#endif