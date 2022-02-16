#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "Form.hpp"

class  ShrubberyCreationForm : public Form{

		public:
			ShrubberyCreationForm(void);
			ShrubberyCreationForm(std::string target);
			virtual ~ShrubberyCreationForm(void);
			virtual bool  executeform(void) const;
			std::string getTarget(void)const;
			ShrubberyCreationForm (ShrubberyCreationForm  const &src);
			ShrubberyCreationForm  & operator=(ShrubberyCreationForm  const & rhs);

		private:
			std::string target;



};

#endif