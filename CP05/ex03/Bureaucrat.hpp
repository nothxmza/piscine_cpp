#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Form;
class Bureaucrat {

    public:
        Bureaucrat(void);
		Bureaucrat(std::string const name,int note);
        virtual ~Bureaucrat(void);
		Bureaucrat(Bureaucrat const &src);
		Bureaucrat & operator=(Bureaucrat const & rhs);


		void incrementer(int nbr);
		void decrementer(int nbr);
		std::string getName(void) const;
		int getGrade(void)const;
		void signForm(Form  & name);
		void executeForm(Form const & form);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char * what () const throw ()
				{
					return ("Grade is too high");
				}
		};
		class GradeTooLowException : public std::exception
		{
		public:
			virtual const char * what () const throw ()
				{
					return ("Grade is too low");
				}
		};


    private:
		const std::string name;
		int grade;

};


std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif