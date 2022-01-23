#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"


class PresidentialPardonForm : public Form{

		public:
			PresidentialPardonForm(void){};
			PresidentialPardonForm(std::string target);
			virtual ~PresidentialPardonForm(void){};
			std::string getTarget(void)const;
			virtual void executeform(void) const;



		private:
			std::string target;

};

#endif