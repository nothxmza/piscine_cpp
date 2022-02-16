#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"


class RobotomyRequestForm: public Form{

	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm (RobotomyRequestForm  const &src);
		RobotomyRequestForm  & operator=(RobotomyRequestForm  const & rhs);
		virtual ~RobotomyRequestForm(void);
		std::string getTarget(void)const;
		virtual bool  executeform(void) const;



	private:
		std::string target;
};

#endif