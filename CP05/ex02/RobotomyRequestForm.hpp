#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"


class RobotomyRequestForm: public Form{

	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		virtual ~RobotomyRequestForm(void);
		std::string getTarget(void)const;
		virtual void executeform(void)const;



	private:
		std::string target;
};

#endif