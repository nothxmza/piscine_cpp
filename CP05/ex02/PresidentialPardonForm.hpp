#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"


class PresidentialPardonForm : public Form{

		public:
			PresidentialPardonForm(void){};
			PresidentialPardonForm(std::string target);
			PresidentialPardonForm (PresidentialPardonForm  const &src);
			PresidentialPardonForm  & operator=(PresidentialPardonForm  const & rhs);
			virtual ~PresidentialPardonForm(void){};
			std::string getTarget(void)const;
			virtual bool  executeform(void) const;




		private:
			std::string target;

};

#endif